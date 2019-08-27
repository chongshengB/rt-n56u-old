#!/bin/sh
cp -rf /etc_ro/aliddns.sh /etc/storage/
chmod 755 "/etc/storage/aliddns.sh"

if [ ! -f "/etc/storage/ad_config_script.sh" ] ; then
cp -rf /etc_ro/ad_config_script.sh /etc/storage/
chmod 755 "/etc/storage/ad_config_script.sh"
fi
if [ ! -f "/etc/storage/koolproxy_rules_script.sh" ] ; then
cp -rf /etc_ro/koolproxy_rules_script.sh /etc/storage/
chmod 755 "/etc/storage/koolproxy_rules_script.sh"
fi
if [ ! -f "/etc/storage/koolproxy_rules_list.sh" ] ; then
cp -rf /etc_ro/koolproxy_rules_list.sh /etc/storage/
chmod 755 "/etc/storage/koolproxy_rules_list.sh"
fi
if [ ! -f "/etc/storage/ddns_script.sh" ] ; then
cp -rf /etc_ro/ddns_script.sh /etc/storage/
chmod 755 "/etc/storage/ddns_script.sh"
fi
if [ ! -f "/etc/storage/adbyby_adblack.sh" ] ; then
cp -rf /etc_ro/adbyby_adblack.sh /etc/storage/
chmod 755 "/etc/storage/adbyby_adblack.sh"
fi
if [ ! -f "/etc/storage/adbyby_adesc.sh" ] ; then
cp -rf /etc_ro/adbyby_adesc.sh /etc/storage/
chmod 755 "/etc/storage/adbyby_adesc.sh"
fi
if [ ! -f "/etc/storage/adbyby_adhost.sh" ] ; then
cp -rf /etc_ro/adbyby_adhost.sh /etc/storage/
chmod 755 "/etc/storage/adbyby_adhost.sh"
fi
if [ ! -f "/etc/storage/adbyby_blockip.sh" ] ; then
cp -rf /etc_ro/adbyby_blockip.sh /etc/storage/
chmod 755 "/etc/storage/adbyby_blockip.sh"
fi
if [ ! -f "/etc/storage/adbyby_rules.sh" ] ; then
cp -rf /etc_ro/adbyby_rules.sh /etc/storage/
chmod 755 "/etc/storage/adbyby_rules.sh"
fi
if [ ! -f "/etc/storage/adbyby_config_script.sh" ] ; then
cp -rf /etc_ro/adbyby_config_script.sh /etc/storage/
chmod 755 "/etc/storage/adbyby_config_script.sh"
fi