#!/bin/sh

ss_bin="ss-redir"
ss_json_file="/tmp/ss-redir.json"
ss_proc="/var/ss-redir"

#/usr/bin/ss-redir -> /var/ss-redir -> /usr/bin/ss-orig-redir or /usr/bin/ssr-redir

ss_type="$(nvram get ss_type)" #0=ss;1=ssr

if [ "${ss_type:-0}" = "0" ]; then
	ln -sf /usr/bin/ss-orig-redir $ss_proc
elif [ "${ss_type:-0}" = "1" ]; then
	ss_protocol=$(nvram get ss_protocol)
	ss_proto_param=$(nvram get ss_proto_param)
	ss_obfs=$(nvram get ss_obfs)
	ss_obfs_param=$(nvram get ss_obfs_param)
	ln -sf /usr/bin/ssr-redir $ss_proc
fi

ss_local_port=$(nvram get ss_local_port)
ss_udp=$(nvram get ss_udp)
ss_server=$(nvram get ss_server)

ss_server_port=$(nvram get ss_server_port)
ss_method=$(nvram get ss_method)
ss_password=$(nvram get ss_key)
ss_mtu=$(nvram get ss_mtu)
ss_timeout=$(nvram get ss_timeout)

ss_mode=$(nvram get ss_mode) #0:global;1:chnroute;2:gfwlist
ss_router_proxy=$(nvram get ss_router_proxy)
ss_lower_port_only=$(nvram get ss_lower_port_only)

loger() {
	logger -st "$1" "$2"
}

get_arg_udp() {
	if [ "$ss_udp" = "1" ]; then
		echo "-u"
	fi
}

get_arg_out(){
	if [ "$ss_router_proxy" = "1" ]; then
		echo "-o"
	fi
}

get_wan_bp_list(){
	wanip="$(nvram get wan_ipaddr)"
	[ -n "$wanip" ] && [ "$wanip" != "0.0.0.0" ] && bp="-b $wanip" || bp=""
	if [ "$ss_mode" = "1" ]; then
		bp=${bp}" -B /etc/storage/chinadns/chnroute.txt"
		echo "$bp"
fi
}

get_ipt_ext(){
	if [ "$ss_lower_port_only" = "1" ]; then
		echo '-e "--dport 22:1023"'
	elif [ "$ss_lower_port_only" = "2" ]; then
		echo '-e "-m multiport --dports 53,80,443"'
	fi
}

func_start_ss_redir(){
	sh -c "$ss_bin -c $ss_json_file $(get_arg_udp) & "
	return $?
}

func_start_ss_rules(){
	ss-rules -f
	if [ "$ss_mode" = "1" ]; then
	sh -c "ss-rules -s $ss_server -l $ss_local_port $(get_wan_bp_list) -d SS_SPEC_WAN_AC $(get_ipt_ext) $(get_arg_out) $(get_arg_udp)"
	return $?
	elif [ "$ss_mode" = "2" ]; then
	cat /etc/storage/ss_dom.sh | grep -v '^!' | grep -v "^$" > /tmp/ss_dom.txt
	awk '{printf("server=/%s/127.0.0.1#5353\nipset=/%s/gfwlist\n", $1, $1 )}' /tmp/ss_dom.txt > /etc/storage/gfwlist/m.gfwlist.conf
	sed -i '/gfwlist/d' /etc/storage/dnsmasq/dnsmasq.conf
cat >> /etc/storage/dnsmasq/dnsmasq.conf << EOF
conf-dir=/etc/storage/gfwlist
EOF

ipset -N gfwlist iphash
iptables -t nat -A PREROUTING -p tcp -m set --match-set gfwlist dst -j REDIRECT --to-port $ss_local_port
iptables -t nat -A OUTPUT -p tcp -m set --match-set gfwlist dst -j REDIRECT --to-port $ss_local_port

  cat /etc/storage/ss_ip.sh | grep -v '^!' | grep -v "^$" > /tmp/whileip.txt
  sed -e "s/^/add gfwlist /" /tmp/whileip.txt | ipset restore
fi
	#sh -c "/etc/storage/scripts/ss-rules -s $ss_server -l $ss_local_port $(get_wan_bp_list) -d SS_SPEC_WAN_AC $(get_ipt_ext) $(get_arg_out) $(get_arg_udp)"
	#return $?
}
func_gen_ss_json(){
cat > "$ss_json_file" <<EOF
{
    "server": "$ss_server",
    "server_port": $ss_server_port,
    "password": "$ss_password",
    "method": "$ss_method",
    "timeout": $ss_timeout,
    "protocol": "$ss_protocol",
    "protocol_param": "$ss_proto_param",
    "obfs": "$ss_obfs",
    "obfs_param": "$ss_obfs_param",
    "local_address": "0.0.0.0",
    "local_port": $ss_local_port,
    "mtu": $ss_mtu
}

EOF
}

func_start(){
addscripts
	func_gen_ss_json && \
	func_start_ss_redir && \
	func_start_ss_rules && \
	loger $ss_bin "start done" || { ss-rules -f && loger $ss_bin "start fail!";}
	/sbin/restart_dhcpd
	sed -i '/shadowsocks/d' /etc/storage/post_wan_script.sh
cat >> /etc/storage/post_wan_script.sh << EOF
/usr/bin/shadowsocks.sh restart
EOF
}

func_stop(){
	killall -q $ss_bin
	ipset -F gfwlist 2>/dev/null
	ipset -X gfwlist 2>/dev/null
if [ "$ss_mode" = "2" ]; then
iptables -t nat -D PREROUTING -p tcp -m set --match-set gfwlist dst -j REDIRECT --to-port $ss_local_port
iptables -t nat -D OUTPUT -p tcp -m set --match-set gfwlist dst -j REDIRECT --to-port $ss_local_port
fi
	sed -i '/gfwlist/d' /etc/storage/dnsmasq/dnsmasq.conf
	/sbin/restart_dhcpd
	ss-rules -f && loger $ss_bin "stop"
	sed -i '/shadowsocks/d' /etc/storage/post_wan_script.sh
	
}

addscripts()
{
ss_dom="/etc/storage/ss_dom.sh"
if [ ! -f "$ss_dom" ] || [ ! -s "$ss_dom" ] ; then
	cat > "$ss_dom" <<-\EEE
!  ------------------------------ 强制走SS代理的域名---------------------------------
	EEE
	chmod 755 "$ss_dom"
fi

ss_ip="/etc/storage/ss_ip.sh"
if [ ! -f "$ss_ip" ] || [ ! -s "$ss_ip" ] ; then
	cat > "$ss_ip" <<-\EEE
91.108.56.0/22
91.108.4.0/22
109.239.140.0/24
149.154.160.0/20
31.13.64.51/32
31.13.65.49/32
31.13.66.49/32
31.13.67.51/32
31.13.68.52/32
31.13.69.240/32
31.13.70.49/32
31.13.71.49/32
31.13.72.52/32
31.13.73.49/32
31.13.74.49/32
31.13.75.52/32
31.13.76.81/32
31.13.77.49/32
31.13.78.53/32
31.13.79.195/32
31.13.80.53/32
31.13.81.53/32
31.13.82.51/32
31.13.83.51/32
31.13.84.51/32
31.13.85.51/32
31.13.86.51/32
31.13.87.51/32
31.13.88.49/32
31.13.90.51/32
31.13.91.51/32
31.13.92.52/32
31.13.93.51/32
31.13.94.52/32
31.13.95.63/32
50.22.198.204/30
50.22.210.32/30
50.22.210.128/27
50.22.225.64/27
50.22.235.248/30
50.22.240.160/27
50.23.90.128/27
50.97.57.128/27
75.126.39.32/27
108.168.174.0/27
108.168.176.192/26
108.168.177.0/27
108.168.180.96/27
108.168.254.65/32
108.168.255.224/32
108.168.255.227/32
158.85.0.96/27
158.85.5.192/27
158.85.46.128/27
158.85.48.224/27
158.85.58.0/25
158.85.61.192/27
158.85.224.160/27
158.85.233.32/27
158.85.249.128/27
158.85.249.224/27
158.85.254.64/27
169.44.36.0/25
169.44.57.64/27
169.44.58.64/27
169.44.80.0/26
169.44.82.96/27
169.44.82.128/27
169.44.82.192/26
169.44.83.0/26
169.44.83.96/27
169.44.83.128/27
169.44.83.192/26
169.44.84.0/24
169.44.85.64/27
169.45.71.32/27
169.45.71.96/27
169.45.87.128/26
169.45.169.192/27
169.45.182.96/27
169.45.210.64/27
169.45.214.224/27
169.45.219.224/27
169.45.237.192/27
169.45.238.32/27
169.45.248.96/27
169.45.248.160/27
169.53.29.128/27
169.53.48.32/27
169.53.71.224/27
169.53.250.128/26
169.53.252.64/27
169.53.255.64/27
169.54.2.160/27
169.54.44.224/27
169.54.51.32/27
169.54.55.192/27
169.54.193.160/27
169.54.210.0/27
169.54.222.128/27
169.55.69.128/26
169.55.74.32/27
169.55.126.64/26
169.55.210.96/27
169.55.235.160/27
173.192.162.32/27
173.192.219.128/27
173.192.222.160/27
173.192.231.32/27
173.193.205.0/27
173.193.230.96/27
173.193.230.128/27
173.193.230.192/27
173.193.239.0/27
174.36.208.128/27
174.36.210.32/27
174.36.251.192/27
174.37.199.192/27
174.37.217.64/27
174.37.231.64/27
174.37.243.64/27
174.37.251.0/27
179.60.192.51/32
179.60.193.51/32
179.60.195.51/32
184.173.136.64/27
184.173.147.32/27
184.173.161.64/32
184.173.161.160/27
184.173.173.116/32
184.173.179.32/27
185.60.216.53/32
192.155.212.192/27
198.11.193.182/31
198.11.251.32/27
198.23.80.0/27
208.43.115.192/27
208.43.117.79/32
208.43.122.128/27
31.13.0.0/16
50.22.0.0/15
50.97.0.0/16
75.126.0.0/16
108.168.0.0/16
158.85.0.0/16
169.32.0.0/11
173.192.0.0/15
174.36.0.0/15
179.60.0.0/16
184.173.0.0/16
192.155.212.0/24
198.11.0.0/16
198.22.0.0/16
208.43.0.0/16
	EEE
	chmod 755 "$ss_ip"
fi
}

case "$1" in
start)
	func_start
	;;
stop)
	func_stop
	;;
restart)
	func_stop
	func_start
	;;
G)
    addscripts
	;;
*)
	echo "Usage: $0 { start | stop | restart }"
	exit 1
	;;
esac
