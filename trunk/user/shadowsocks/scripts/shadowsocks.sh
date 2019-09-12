#!/bin/sh
#
# Copyright (C) 2017 openwrt-ssr
# Copyright (C) 2017 yushi studio <ywb94@qq.com>
# Copyright (C) 2018 lean <coolsnowwolf@gmail.com>
#
# This is free software, licensed under the GNU General Public License v3.
# See /LICENSE for more information.
#

SERVICE_DAEMONIZE=1
NAME=shadowsocksr
EXTRA_COMMANDS=rules
CONFIG_FILE=/tmp/${NAME}.json
CONFIG_UDP_FILE=/tmp/${NAME}_u.json
CONFIG_SOCK5_FILE=/tmp/${NAME}_s.json
server_count=0
redir_tcp=0
redir_udp=0
tunnel_enable=0
local_enable=0
kcp_enable_flag=0
kcp_flag=0
pdnsd_enable_flag=0
switch_enable=0
#switch_server=$1
MAXFD=32768
CRON_FILE=/etc/crontabs/root
threads=1
wan_bp_ips='/etc/storage/chinadns/chnroute.txt'
wan_fw_ips="/tmp/whileip.txt"
run_mode=`nvram get ss_run_mode`

gen_config_file() {
echo $2
logger -t "SS" "正在创建json文件..."
         host=`nvram get ssp_server_x$1`
         if echo $host|grep -E "^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$">/dev/null; then         
         hostip=${host}
         elif  [ "$host" != "${host#*:[0-9a-fA-F]}" ] ;then
         hostip=${host}
         else
          hostip=`ping ${host} -s 1 -c 1 | grep PING | cut -d'(' -f 2 | cut -d')' -f1`
          if echo $hostip|grep -E "^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$">/dev/null; then
          hostip=${hostip}
         else
          hostip=`cat /etc/storage/ssr_ip`
          fi
         fi
         [ $2 = "0" -a  $kcp_flag = "1" ] && hostip="127.0.0.1"
         
         if [ $2 = "0" ] ;then
         config_file=$CONFIG_FILE
         elif [ $2 = "1" ]; then
         config_file=$CONFIG_UDP_FILE
         else
         config_file=$CONFIG_SOCK5_FILE
         fi
         #if [ $(uci_get_by_name $1 fast_open 0) = "1" ] ;then
         #fastopen="true";
        # else
         fastopen="false";
        # fi
stype=`nvram get ssp_type_x$1`
echo $stype
if [ "$stype" == "ss" ] ;then
	cat <<-EOF >$config_file
{
		    "server": "$hostip",
		    "server_port": $(nvram get ssp_prot_x$1),
		    "local_address": "0.0.0.0",
		    "local_port": $(nvram get ssp_local_port_x$1),
		    "password": "$(nvram get ss_key_x$1)",
		    "timeout": 60,
		    "method": "$(nvram get ss_method_x$1)",
			"plugin": "$(nvram get ss_plugin_x$1)",
		    "reuse_port": true,
		    "fast_open": $fastopen
}
EOF
       elif [ "$stype" == "ssr" ] ;then
	cat <<-EOF >$config_file
{
		    "server": "$hostip",
		    "server_port": $(nvram get ssp_prot_x$1),
		    "local_address": "0.0.0.0",
		    "local_port": $(nvram get ssp_local_port_x$1),
		    "password": "$(nvram get ss_key_x$1),",
		    "timeout": 60,
		    "method": "$(nvram get ss_method_x$1)",
		    "protocol": "$(nvram get ss_protocol_x$1)",
		    "protocol_param": "$(nvram get ss_proto_param_x$1)",
		    "obfs": "$(nvram get ss_obfs_x$1)",
		    "obfs_param": "$(nvram get ss_obfs_param_x$1)",
		    "reuse_port": true,
		    "fast_open": $fastopen
}
EOF
     # elif [ "$stype" == "v2ray" ] ;then
       # lua /usr/share/shadowsocksr/genv2config.lua $GLOBAL_SERVER tcp $(uci_get_by_name $1 local_port) > /var/etc/v2-ssr-retcp.json
       # sed -i 's/\\//g' /var/etc/v2-ssr-retcp.json
fi
}

get_arg_out() {
	case $router_proxy in
		1) echo "-o";;
		2) echo "-O";;
	esac
}

start_rules() {
logger -t "SS" "正在添加防火墙规则..."
	server=`nvram get ssp_server_x$1`
	cat /etc/storage/ss_ip.sh | grep -v '^!' | grep -v "^$" > /tmp/whileip.txt
	#resolve name
	if echo $server|grep -E "^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$">/dev/null; then         
	server=${server}
	elif  [ "$server" != "${server#*:[0-9a-fA-F]}" ] ;then
	server=${server}
	else
	server=`ping ${server} -s 1 -c 1 | grep PING | cut -d'(' -f 2 | cut -d')' -f1`
	 if echo $server|grep -E "^[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}$">/dev/null; then
	  echo $server >/etc/storage/ssr_ip
	 else
	  server=`cat /etc/storage/ssr_ip`
	 fi
	fi
	
	kcp_server=$server
	
	kcp_enable=$(nvram get kcp_enable)
	if [ $kcp_enable = "1" ] ;then
    kcp_flag=1
	fi	
	
	local_port=$(nvram get ssp_local_port_x$1)
	lan_ac_ips=$lan_ac_ips
	lan_ac_mode="b"
	router_proxy="1"
	if [ "$UDP_RELAY_SERVER" != "nil" ]; then
	if [ "$GLOBAL_SERVER" = "$UDP_RELAY_SERVER" -a $kcp_flag = 0 ]; then
		ARG_UDP="-u"
	elif [ -n "$UDP_RELAY_SERVER" ]; then
		ARG_UDP="-U"
		udp_server=`nvram get ssp_server_x$UDP_RELAY_SERVER`
		udp_local_port=`nvram get ssp_local_port_x$UDP_RELAY_SERVER`
	fi
	fi
	if [ -n "$lan_ac_ips" ]; then
		case "$lan_ac_mode" in
			w|W|b|B) ac_ips="$lan_ac_mode$lan_ac_ips";;
		esac
	fi
	echo $ac_ips
	#ac_ips="b"
#deal	gfw firewall rule
	gfwmode="" 
	if [ "$run_mode" = "gfw" ]; then
	gfwmode="-g"
	elif [ "$run_mode" = "router" ]; then
	gfwmode="-r"
	elif [ "$run_mode" = "oversea" ]; then
	gfwmode="-c"
	elif [ "$run_mode" = "all" ]; then
	gfwmode="-z"
	fi
	echo $gfwmode
	echo "create china hash:net family inet hashsize 1024 maxelem 65536" > /tmp/china.ipset
awk '!/^$/&&!/^#/{printf("add china %s'" "'\n",$0)}' /etc/storage/chinadns/chnroute.txt >> /tmp/china.ipset
ipset -! flush china
ipset -! restore < /tmp/china.ipset 2>/dev/null
rm -f /tmp/china.ipset

	 /usr/bin/ss-rules \
		-s "$server" \
		-l "$local_port" \
		-S "$udp_server" \
		-L "$udp_local_port" \
		-a "$ac_ips" \
		-i "" \
		-b "$wan_bp_ips" \
		-w "$wan_fw_ips" \
		-p "$lan_fp_ips" \
		-G "$lan_gm_ips" \
		$(get_arg_out) $gfwmode $ARG_UDP
			
	return $?
}

start_pdnsd() {
logger -t "SS" "正在启动pdnsd..."
	usr_dns="$1"
    usr_port="$2"

	tcp_dns_list="208.67.222.222, 208.67.220.220"
	[ -z "$usr_dns" ] && usr_dns="8.8.4.4"
	[ -z "$usr_port" ] && usr_port="53"
 dnsd_enable=`nvram get pdnsd_enable`
 echo $dnsd_enable
if [ $dnsd_enable = 0 ]; then
   if [ ! -d /tmp/pdnsd ];then
       mkdir -p /tmp/pdnsd
       echo -ne "pd13\000\000\000\000" >/tmp/pdnsd/pdnsd.cache
       chown -R nobody:nogroup /tmp/pdnsd
   fi
	cat > /tmp/pdnsd.conf <<EOF
global {
perm_cache=2048;
cache_dir="/tmp/pdnsd";
pid_file = /tmp/pdnsd.pid;
run_as="nobody";
server_port = 5335;
server_ip = 127.0.0.1;
status_ctl = on;
query_method=tcp_only;
min_ttl=1m;
max_ttl=1w;
timeout=5;
}
server {
	label= "ssr-usrdns";
	ip = $usr_dns;
	port = $usr_port;
	timeout=6;
	uptest=none;
	interval=10m;
	purge_cache=off;
}
server {
	label= "ssr-pdnsd";
	ip = $tcp_dns_list;
	port = 5353;
	timeout=6;
	uptest=none;
	interval=10m;
	purge_cache=off;
}
EOF
chmod 600 /tmp/pdnsd.conf
/usr/bin/pdnsd -c /tmp/pdnsd.conf -d
	
elif [ $dnsd_enable = 1 ]; then

/usr/bin/dnsproxy -T -p 5335 -R $usr_dns &
#sh -c "dnsproxy -T -p 5335 -R $usr_dns & "

elif [ $dnsd_enable = 2 ]; then
/usr/bin/dns-forwarder -b 127.0.0.1 -p 5335 -s $usr_dns:$usr_port &
fi
}


start_redir() {
logger -t "SS" "正在启动SS程序..."
	#case "$(uci_get_by_name $GLOBAL_SERVER auth_enable)" in
	#	1|on|true|yes|enabled) ARG_OTA="-A";;
	#	*) ARG_OTA="";;
	#esac
	ARG_OTA=""
	#deal kcp
	kcp_enable=0
	if [ $kcp_enable = "1" ] ;then
		[ ! -f "/usr/bin/kcptun-client" ]  &&  return 1
		
		kcp_str=`/usr/bin/kcptun-client -v |grep kcptun|wc -l`
		[ "0" = $kcp_str ] && return 1
		kcp_port=$(uci_get_by_name $GLOBAL_SERVER kcp_port)
		server_port=$(uci_get_by_name $GLOBAL_SERVER server_port)
		password=$(uci_get_by_name $GLOBAL_SERVER kcp_password)
		kcp_param=$(uci_get_by_name $GLOBAL_SERVER kcp_param)
		[ "$password" != "" ] && password="--key "${password}
		service_start /usr/bin/kcptun-client \
			-r $kcp_server:$kcp_port \
			-l :$server_port $password $kcp_param 
		kcp_enable_flag=1
	fi
  gen_config_file $1 0
  stype=`nvram get ssp_type_x$1`
  echo $stype
    if [ "$stype" == "ss" ] ;then
        sscmd="ss-redir"
       elif [ "$stype" == "ssr" ] ;then
        sscmd="ssr-redir"
       elif [ "$stype" == "v2ray" ] ;then
        sscmd="v2ray"
    fi
	UDP_RELAY_SERVER=$(nvram get udp_relay_server)
	utype=`nvram get ssp_type_x$UDP_RELAY_SERVER`
    if [ "$utype" == "ss" ] ;then
        ucmd="ss-redir"
       elif [ "$utype" == "ssr" ] ;then
        ucmd="ssr-redir"
       elif [ "$utype" == "v2ray" ] ;then
        ucmd="v2ray"
     fi
  
  if [ "$(nvram get ss_threads)" = "0" ] ;then
    threads=$(cat /proc/cpuinfo | grep 'processor' | wc -l)
  else
    threads=$(nvram get ss_threads)
  fi

	redir_tcp=1
	if [ "$stype" == "ss" -o "$stype" == "ssr" ] ;then
    last_config_file=$CONFIG_FILE
     pid_file="/tmp/ssr-retcp.pid"
    for i in $(seq 1 $threads)  
    do 
      $sscmd -c $CONFIG_FILE $ARG_OTA -f /tmp/ssr-retcp_$i.pid >/dev/null 2>&1
	  #sh -c "$sscmd -c $CONFIG_FILE & "
    done
    echo "$(date "+%Y-%m-%d %H:%M:%S") Shadowsocks/ShadowsocksR $threads 线程启动成功!" >> /tmp/ssrplus.log  
  elif [ "$stype" == "v2ray" ] ;then
    $sscmd -config /var/etc/v2-ssr-retcp.json >/dev/null 2>&1 &
    echo "$(date "+%Y-%m-%d %H:%M:%S") $($sscmd -version | head -1) Started!" >> /tmp/ssrplus.log
	fi
	
	if [ "$UDP_RELAY_SERVER" != "nil" ] ;then
    redir_udp=1
    if [ "$utype" == "ss" -o "$utype" == "ssr" ] ;then
      case "$(uci_get_by_name $UDP_RELAY_SERVER auth_enable)" in
        1|on|true|yes|enabled) ARG_OTA="-A";;
        *) ARG_OTA="";;
      esac		
      gen_config_file $UDP_RELAY_SERVER 1
      last_config_file=$CONFIG_UDP_FILE
      pid_file="/tmp/ssr-reudp.pid"
      $ucmd -c $last_config_file $ARG_OTA -U -f /tmp/ssr-reudp.pid >/dev/null 2>&1
    elif [ "$utype" == "v2ray" ] ; then
        lua /usr/share/shadowsocksr/genv2config.lua $UDP_RELAY_SERVER udp $(uci_get_by_name $UDP_RELAY_SERVER local_port) > /var/etc/v2-ssr-reudp.json
        sed -i 's/\\//g' /var/etc/v2-ssr-reudp.json
        $ucmd -config /var/etc/v2-ssr-reudp.json >/dev/null 2>&1 &   
    fi
   fi



	#deal with dns
      if [ "$(nvram get pdnsd_enable)" != "3" ] ;then
    dnsstr="$(nvram get tunnel_forward)"
    dnsserver=`echo "$dnsstr"|awk -F ':'  '{print $1}'`
    dnsport=`echo "$dnsstr"|awk -F ':'  '{print $2}'`
    if [ "$run_mode" = "gfw" ]; then
	echo $dnsserver
	ipset -N gfwlist hash:net 2>/dev/null
        ipset add gfwlist $dnsserver 2>/dev/null
    elif [ "$run_mode" = "oversea" ]; then
	ipset -N oversea hash:net 2>/dev/null
        ipset add oversea $dnsserver 2>/dev/null
    else
	ipset -N ss_spec_wan_ac hash:net 2>/dev/null
        ipset add ss_spec_wan_ac $dnsserver 2>/dev/null  
    fi
	start_pdnsd $dnsserver $dnsport
    pdnsd_enable_flag=1
fi
	ss_turn=`nvram get ss_turn`
	ss_switch=`nvram get switch_enable_x$1`
	if [ $ss_turn = "1" ] ;then
		if [ $ss_switch = "1" ] ;then
			if [ -z "$switch_server" ] ;then
				switch_time=$(nvram get ss_turn_s)
				switch_timeout=$(nvram get ss_turn_ss)
			/usr/bin/ssr-switch start $switch_time $switch_timeout &
				#switch_enable=1
			fi
		fi
	fi
	#add_cron 

	return $?
}

gen_service_file() {
	if [ $(uci_get_by_name $1 fast_open) = "1" ] ;then
	fastopen="true";
	else
	fastopen="false";
	fi       
	cat <<-EOF >$2
		{
		    "server": "0.0.0.0",
		    "server_port": $(uci_get_by_name $1 server_port),
		    "password": "$(uci_get_by_name $1 password)",
		    "timeout": $(uci_get_by_name $1 timeout 60),
		    "method": "$(uci_get_by_name $1 encrypt_method)",
		    "protocol": "$(uci_get_by_name $1 protocol)",
		    "protocol_param": "$(uci_get_by_name $1 protocol_param)",
		    "obfs": "$(uci_get_by_name $1 obfs)",
		    "obfs_param": "$(uci_get_by_name $1 obfs_param)",
		    "fast_open": $fastopen
		}
EOF
}

start_service() {
[ $(uci_get_by_name $1 enable) = "0"  ]  && return 1
let server_count=server_count+1
if [ $server_count = 1 ] ;then
iptables -N SSR-SERVER-RULE && \
iptables -t filter -I INPUT  -j SSR-SERVER-RULE
fi

gen_service_file $1 /var/etc/${NAME}_${server_count}.json
/usr/bin/ssr-server -c /var/etc/${NAME}_${server_count}.json -u -f /var/run/ssr-server${server_count}.pid >/dev/null 2>&1
iptables -t filter -A SSR-SERVER-RULE -p tcp --dport $(uci_get_by_name $1 server_port) -j ACCEPT
iptables -t filter -A SSR-SERVER-RULE -p udp --dport $(uci_get_by_name $1 server_port) -j ACCEPT
return 0
}
gen_serv_include() {
FWI=$(uci get firewall.shadowsocksr.path 2>/dev/null) 
[ -n "$FWI" ] || return 0
if [ ! -f $FWI ] ;then
echo '#!/bin/sh' >$FWI
fi
extract_rules() {
echo "*filter"
iptables-save -t filter | grep SSR-SERVER-RULE|sed -e "s/^-A INPUT/-I INPUT/" 
echo 'COMMIT'
}
	cat <<-EOF >>$FWI
	iptables-save -c | grep -v "SSR-SERVER" | iptables-restore -c
	iptables-restore -n <<-EOT
	$(extract_rules)
	EOT
EOF

}


start_local() {
	local_server=$(nvram get socks5_proxy)
	[ "$local_server" = "nil" ] && return 1
	mkdir -p /var/run /var/etc
	gen_config_file $local_server 2
	/usr/bin/ssr-local -c $CONFIG_SOCK5_FILE -u  \
		-l $(nvram get socks5_proxy_prot) \
		-b 0.0.0.0 \
		-f /tmp/ssr-local.pid >/dev/null 2>&1
	local_enable=1	
}

rules() {
	[ "$GLOBAL_SERVER" = "-1" ] && return 1
	mkdir -p /var/run /var/etc
	#UDP_RELAY_SERVER=$(uci_get_by_type global udp_relay_server)
	[ "$UDP_RELAY_SERVER" = "same" ] && UDP_RELAY_SERVER=$GLOBAL_SERVER
	if start_rules $GLOBAL_SERVER;then
	return 0
	else
	return 1
	fi
}

ssp_start() { 
	#if [ -z "$switch_server" ] ;then
	GLOBAL_SERVER=`nvram get global_server`
	echo $GLOBAL_SERVER
	ss_enable=`nvram get ss_enable`
	#else
	#GLOBAL_SERVER=$switch_server
	#switch_enable=1
	#fi
	#if rules ;then
if [ $ss_enable != "0" ] && [ $GLOBAL_SERVER != "nil" ]; then
	
	start_redir $GLOBAL_SERVER
	start_rules $GLOBAL_SERVER
	#start_rules $GLOBAL_SERVER
  
  
	if [ "$run_mode" = "gfw" ] ;then
	mkdir -p /etc/storage/dnsmasq-ss.d
		cat /etc/storage/ss_dom.sh | grep -v '^!' | grep -v "^$" > /tmp/ss_dom.txt
	awk '{printf("server=/%s/127.0.0.1#5353\nipset=/%s/gfwlist\n", $1, $1 )}' /tmp/ss_dom.txt > /etc/storage/gfwlist/m.gfwlist.conf
	rm -f /tmp/ss_dom.txt
	sed -i '/gfwlist/d' /etc/storage/dnsmasq/dnsmasq.conf
	sed -i '/dnsmasq.oversea/d' /etc/storage/dnsmasq/dnsmasq.conf
cat >> /etc/storage/dnsmasq/dnsmasq.conf << EOF
conf-dir=/etc/storage/gfwlist/
EOF
  elif [ "$run_mode" = "oversea" ] ;then
  mkdir -p /etc/storage/dnsmasq.oversea
  	sed -i '/dnsmasq-ss/d' /etc/storage/dnsmasq/dnsmasq.conf
	sed -i '/dnsmasq.oversea/d' /etc/storage/dnsmasq/dnsmasq.conf
cat >> /etc/storage/dnsmasq/dnsmasq.conf << EOF
conf-dir=/etc/storage/dnsmasq.oversea
EOF
	fi
/sbin/restart_dhcpd
	start_local
	
if [ $(nvram get ss_watchcat) = 1 ] ;then
	let total_count=server_count+redir_tcp+redir_udp+tunnel_enable+kcp_enable_flag+local_enable+pdnsd_enable_flag+switch_enable
    if [ $total_count -gt 0 ]
    then
    #param:server(count) redir_tcp(0:no,1:yes)  redir_udp tunnel kcp local gfw
    /usr/bin/ssr-monitor $server_count $redir_tcp $redir_udp $tunnel_enable $kcp_enable_flag $local_enable $pdnsd_enable_flag $switch_enable >/dev/null 2>&1 &
    fi
	fi
	
	ENABLE_SERVER=$(nvram get global_server)
	[ "$ENABLE_SERVER" = "-1" ] && return 1
	logger -t "SS" "启动成功。"
	fi
}

boot() {
	(/usr/share/shadowsocksr/chinaipset.sh && sleep 5 && start >/dev/null 2>&1) &
}

ssp_close() {
    #killall -q -9 ssr-monitor
	#killall -q -9 ssr-switch
	/usr/bin/ss-rules -f
	srulecount=`iptables -L|grep SSR-SERVER-RULE|wc -l`
	if [ $srulecount -gt 0 ] ;then
	iptables -F SSR-SERVER-RULE
	iptables -t filter -D INPUT  -j SSR-SERVER-RULE
	iptables -X SSR-SERVER-RULE 2>/dev/null
	fi
	#if [ -z "$switch_server" ] ;then
    kill -9 $(ps | grep ssr-switch | grep -v grep | awk '{print $1}') >/dev/null 2>&1
	#fi
	#if [ $(nvram get monitor_enable) = 1 ] ;then
    kill -9 $(ps | grep ssr-monitor | grep -v grep | awk '{print $1}') >/dev/null 2>&1
	#fi
	
	killall -q -9 ss-redir
	killall -q -9 ssr-redir
	killall -q -9 v2ray
	killall -9 dnsproxy
	killall -9 dns-forwarder
	killall -q -9 ssr-server
	killall -q -9 kcptun-client
	killall -q -9 ssr-local
	
	if [ -f /tmp/pdnsd.pid ] ;then
    kill $(cat /tmp/pdnsd.pid) >/dev/null 2>&1
  else 
    kill -9 $(ps | grep pdnsd | grep -v grep | awk '{print $1}') >/dev/null 2>&1 
	fi
	sed -i '/gfwlist/d' /etc/storage/dnsmasq/dnsmasq.conf
	sed -i '/dnsmasq.oversea/d' /etc/storage/dnsmasq/dnsmasq.conf
	if [ -f "/etc/storage/dnsmasq-ss.d" ]; then
		rm -f /etc/storage/dnsmasq-ss.d
		
  fi 
  /sbin/restart_dhcpd
}

ressp() {
	#if [ -z "$switch_server" ] ;then
	GLOBAL_SERVER=`nvram get global_server`
	echo $GLOBAL_SERVER
	ss_enable=`nvram get ss_enable`
	#else
	#GLOBAL_SERVER=$switch_server
	#switch_enable=1
	#fi
	#if rules ;then
if [ $ss_enable != "0" ] && [ $GLOBAL_SERVER != "nil" ]; then
    start_redir $1
	start_rules $1
	#start_rules $GLOBAL_SERVER
  
  
	if [ "$run_mode" = "gfw" ] ;then
	#mkdir -p /etc/storage/dnsmasq-ss.d
		cat /etc/storage/ss_dom.sh | grep -v '^!' | grep -v "^$" > /tmp/ss_dom.txt
	awk '{printf("server=/%s/127.0.0.1#5353\nipset=/%s/gfwlist\n", $1, $1 )}' /tmp/ss_dom.txt > /etc/storage/gfwlist/m.gfwlist.conf
	rm -f /tmp/ss_dom.txt
	sed -i '/gfwlist/d' /etc/storage/dnsmasq/dnsmasq.conf
	sed -i '/dnsmasq.oversea/d' /etc/storage/dnsmasq/dnsmasq.conf
cat >> /etc/storage/dnsmasq/dnsmasq.conf << EOF
conf-dir=/etc/storage/gfwlist/
EOF
  elif [ "$run_mode" = "oversea" ] ;then
  mkdir -p /etc/storage/dnsmasq.oversea
  	sed -i '/dnsmasq-ss/d' /etc/storage/dnsmasq/dnsmasq.conf
	sed -i '/dnsmasq.oversea/d' /etc/storage/dnsmasq/dnsmasq.conf
cat >> /etc/storage/dnsmasq/dnsmasq.conf << EOF
conf-dir=/etc/storage/dnsmasq.oversea
EOF

	fi
/sbin/restart_dhcpd
	start_local
	
if [ $(nvram get ss_watchcat) = 1 ] ;then
	let total_count=server_count+redir_tcp+redir_udp+tunnel_enable+kcp_enable_flag+local_enable+pdnsd_enable_flag+switch_enable
    if [ $total_count -gt 0 ]
    then
    #param:server(count) redir_tcp(0:no,1:yes)  redir_udp tunnel kcp local gfw
    /usr/bin/ssr-monitor $server_count $redir_tcp $redir_udp $tunnel_enable $kcp_enable_flag $local_enable $pdnsd_enable_flag $switch_enable >/dev/null 2>&1 &
    fi
	fi
	
	ENABLE_SERVER=$(nvram get global_server)
	[ "$ENABLE_SERVER" = "-1" ] && return 1
	logger -t "SS" "启动成功。"
	fi
}

case $1 in
start)
	ssp_start
	;;
stop)
	killall -q -9 ssr-switch
	ssp_close
	;;
restart)
    ssp_close
    ssp_start
	;;
reserver)
   ssp_close
   ressp $2
   ;;
*)
	echo "check"
	#exit 0
	;;
esac
