<!DOCTYPE html>
<html>
<head>
<title><#Web_Title#> - adbyby</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<meta http-equiv="Pragma" content="no-cache">
<meta http-equiv="Expires" content="-1">

<link rel="shortcut icon" href="images/favicon.ico">
<link rel="icon" href="images/favicon.png">
<link rel="stylesheet" type="text/css" href="/bootstrap/css/bootstrap.min.css">
<link rel="stylesheet" type="text/css" href="/bootstrap/css/main.css">
<link rel="stylesheet" type="text/css" href="/bootstrap/css/engage.itoggle.css">

<script type="text/javascript" src="/jquery.js"></script>
<script type="text/javascript" src="/bootstrap/js/bootstrap.min.js"></script>
<script type="text/javascript" src="/bootstrap/js/engage.itoggle.min.js"></script>
<script type="text/javascript" src="/state.js"></script>
<script type="text/javascript" src="/general.js"></script>
<script type="text/javascript" src="/itoggle.js"></script>
<script type="text/javascript" src="/popup.js"></script>
<script type="text/javascript" src="/help.js"></script>
<script>
var $j = jQuery.noConflict();

$j(document).ready(function() {
	init_itoggle('adbyby_enable');
	init_itoggle('hosts_ad');
	init_itoggle('tv_hosts');
	init_itoggle('adbyby_adb_update');
});

</script>
<script>
<% adbyby_status(); %>
<% login_state_hook(); %>

function initial(){
	show_banner(2);
	show_menu(5,15,1);
	show_footer();
	fill_adbyby_status(adbyby_status());
	change_adbyby_enable();
	if (!login_safe())
		textarea_scripts_enabled(0);
}

function textarea_scripts_enabled(v){
	inputCtrl(document.form['scripts.adbyby_rules.sh'], v);
	inputCtrl(document.form['scripts.adbyby_blockip.sh'], v);
	inputCtrl(document.form['scripts.adbyby_adblack.sh'], v);
	inputCtrl(document.form['scripts.adbyby_adesc.sh'], v);
	inputCtrl(document.form['scripts.adbyby_adhost.sh'], v);
	//inputCtrl(document.form['scripts.adbyby_config_script.sh'], v);
}

function applyRule(){
//	if(validForm()){
		showLoading();
		
		document.form.action_mode.value = " Apply ";
		document.form.current_page.value = "/Advanced_adbyby.asp";
		document.form.next_page.value = "";
		
		document.form.submit();
//	}
}

function submitInternet(v){
	showLoading();
	document.adbyby_action.action = "Ad_action.asp";
	document.adbyby_action.connect_action.value = v;
	document.adbyby_action.submit();
}

//function change_adbyby_enable(){
//	var m = document.form.adbyby_enable[0].checked;
	//showhide_div('kp_update_b', m);
//}


function fill_adbyby_status(status_code){
	var stext = "Unknown";
	if (status_code == 0)
		stext = "<#Stopped#>";
	else if (status_code == 1)
		stext = "<#Running#>";
	$("adbyby_status").innerHTML = '<span class="label label-' + (status_code != 0 ? 'success' : 'warning') + '">' + stext + '</span>';
}


</script>
</head>

<body onload="initial();" onunLoad="return unload_body();">

<div class="wrapper">
	<div class="container-fluid" style="padding-right: 0px">
		<div class="row-fluid">
			<div class="span3"><center><div id="logo"></div></center></div>
			<div class="span9" >
				<div id="TopBanner"></div>
			</div>
		</div>
	</div>

	<div id="Loading" class="popup_bg"></div>

	<iframe name="hidden_frame" id="hidden_frame" src="" width="0" height="0" frameborder="0"></iframe>

	<form method="post" name="form" id="ruleForm" action="/start_apply.htm" target="hidden_frame">

	<input type="hidden" name="current_page" value="Advanced_adbyby.asp">
	<input type="hidden" name="next_page" value="">
	<input type="hidden" name="next_host" value="">
	<input type="hidden" name="sid_list" value="AdbybyConf;LANHostConfig;General;">
	<input type="hidden" name="group_id" value="">
	<input type="hidden" name="action_mode" value="">
	<input type="hidden" name="action_script" value="">
	<input type="hidden" name="wan_ipaddr" value="<% nvram_get_x("", "wan0_ipaddr"); %>" readonly="1">
	<input type="hidden" name="wan_netmask" value="<% nvram_get_x("", "wan0_netmask"); %>" readonly="1">
	<input type="hidden" name="dhcp_start" value="<% nvram_get_x("", "dhcp_start"); %>">
	<input type="hidden" name="dhcp_end" value="<% nvram_get_x("", "dhcp_end"); %>">

	<div class="container-fluid">
		<div class="row-fluid">
			<div class="span3">
				<!--Sidebar content-->
				<!--=====Beginning of Main Menu=====-->
				<div class="well sidebar-nav side_nav" style="padding: 0px;">
					<ul id="mainMenu" class="clearfix"></ul>
					<ul class="clearfix">
						<li>
							<div id="subMenu" class="accordion"></div>
						</li>
					</ul>
				</div>
			</div>

			<div class="span9">
				<!--Body content-->
				<div class="row-fluid">
					<div class="span12">
						<div class="box well grad_colour_dark_blue">
							<h2 class="box_head round_top">广告屏蔽功能 - Adbyby</h2>
							<div class="round_bottom">
								<div class="row-fluid">
									<div id="tabMenu" class="submenuBlock"></div>
									<div class="alert alert-info" style="margin: 10px;">广告屏蔽大师 Plus + 可以全面过滤各种横幅、弹窗、视频广告，同时阻止跟踪、隐私窃取及各种恶意网站<br />
									<div>Plus + 版本可以和 Adblock Plus Host 结合方式运行，过滤广告不损失带宽</div>
									<div>静态规则：【<% nvram_get_x("", "adbyby_ltime"); %>】 </div>
									<div>视频规则：【<% nvram_get_x("", "adbyby_vtime"); %>】 </div>
									<div>Adblock Plus Host List：【<% nvram_get_x("", "adbyby_adb"); %>】条 </div>
									</div>
									<table width="100%" align="center" cellpadding="4" cellspacing="0" class="table">
									<tr> <th>运行状态:</th>
                                            <td id="adbyby_status" colspan="3"></td>
                                        </tr>
										<tr >
											<th width="30%" style="border-top: 0 none;">启用 Adbyby 功能 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</th>
											<td style="border-top: 0 none;">
													<div class="main_itoggle">
													<div id="adbyby_enable_on_of">
														<input type="checkbox" id="adbyby_enable_fake" <% nvram_match_x("", "adbyby_enable", "1", "value=1 checked"); %><% nvram_match_x("", "adbyby_enable", "0", "value=0"); %>  />
													</div>
												</div>
												<div style="position: absolute; margin-left: -10000px;">
													<input type="radio" value="1" name="adbyby_enable" id="adbyby_enable_1" class="input" onClick="change_adbyby_enable();" <% nvram_match_x("", "adbyby_enable", "1", "checked"); %> /><#checkbox_Yes#>
													<input type="radio" value="0" name="adbyby_enable" id="adbyby_enable_0" class="input" onClick="change_adbyby_enable();" <% nvram_match_x("", "adbyby_enable", "0", "checked"); %> /><#checkbox_No#>
												</div>
											</td>
										</tr>
										<tr>
											<th width="50%">过滤方案选择</th>
											<td style="border-top: 0 none;">
												<select name="adbyby_set" class="input">
													<option value="0" <% nvram_match_x("","adbyby_set", "0","selected"); %>>方案一全局模式（推荐），全部IP走adbyby过滤</option>
													<option value="1" <% nvram_match_x("","adbyby_set", "1","selected"); %>>方案二Plus + 模式(只过滤列表内域名结合ABP名单)</option>
												</select>
												<div><span style="color:#888;">方案二是Plus + 模式，过滤效果稍差，</span></div>
												<div><span style="color:#888;">但有效降低CPU占用，推荐方案一</span></div>
											</td>
										</tr>
										<tr>
											<th width="30%" style="border-top: 0 none;">加载Adblock Plus Host List
											<input id="adbyby_update_b" class="btn btn-success" style="width:110px display:none;" type="button" name="updateadb" value="强制更新" onclick="submitInternet('updateadb');" />
											</th>
											<td>
													<div class="main_itoggle">
													<div id="adbyby_adb_update_on_of">
														<input type="checkbox" id="adbyby_adb_update_fake" <% nvram_match_x("", "adbyby_adb_update", "1", "value=1 checked"); %><% nvram_match_x("", "adbyby_adb_update", "0", "value=0"); %>  />
													</div>
												</div>
												<div style="position: absolute; margin-left: -10000px;">
													<input type="radio" value="1" name="adbyby_adb_update" id="adbyby_adb_update_1" class="input" value="1" <% nvram_match_x("", "adbyby_adb_update", "1", "checked"); %> /><#checkbox_Yes#>
													<input type="radio" value="0" name="adbyby_adb_update" id="adbyby_adb_update_0" class="input" value="0" <% nvram_match_x("", "adbyby_adb_update", "0", "checked"); %> /><#checkbox_No#>
												</div>
											</td>
										</tr>
										<tr>
											<th width="30%" style="border-top: 0 none;">加载hosts去AD？</th>
											<td>
													<div class="main_itoggle">
													<div id="hosts_ad_on_of">
														<input type="checkbox" id="hosts_ad_fake" <% nvram_match_x("", "hosts_ad", "1", "value=1 checked"); %><% nvram_match_x("", "hosts_ad", "0", "value=0"); %>  />
													</div>
												</div>
												<div style="position: absolute; margin-left: -10000px;">
													<input type="radio" value="1" name="hosts_ad" id="hosts_ad_1" class="input" value="1" <% nvram_match_x("", "hosts_ad", "1", "checked"); %> /><#checkbox_Yes#>
													<input type="radio" value="0" name="hosts_ad" id="hosts_ad_0" class="input" value="0" <% nvram_match_x("", "hosts_ad", "0", "checked"); %> /><#checkbox_No#>
												</div>
											</td>
										</tr>
																				<tr>
											<th width="30%" style="border-top: 0 none;">加载TVbox Hosts？</th>
											<td>
													<div class="main_itoggle">
													<div id="tv_hosts_on_of">
														<input type="checkbox" id="tv_hosts_fake" <% nvram_match_x("", "tv_hosts", "1", "value=1 checked"); %><% nvram_match_x("", "tv_hosts", "0", "value=0"); %>  />
													</div>
												</div>
												<div style="position: absolute; margin-left: -10000px;">
													<input type="radio" value="1" name="tv_hosts" id="tv_hosts_1" class="input" value="1" <% nvram_match_x("", "tv_hosts", "1", "checked"); %> /><#checkbox_Yes#>
													<input type="radio" value="0" name="tv_hosts" id="tv_hosts_0" class="input" value="0" <% nvram_match_x("", "tv_hosts", "0", "checked"); %> /><#checkbox_No#>
												</div>
											</td>
										</tr>
										<tr id="adbyby_update_tr">
											<th style="border-top: 0 none;">规则自动更新:</th>
											<td style="border-top: 0 none;">
												<select name="adbyby_update" class="input" style="width: 60px;">
													<option value="0" <% nvram_match_x("","adbyby_update", "0","selected"); %>>每天</option>
													<option value="1" <% nvram_match_x("","adbyby_update", "1","selected"); %>>每隔</option>
													<option value="2" <% nvram_match_x("","adbyby_update", "2","selected"); %>>关闭</option>
												</select>
												<input style="width: 20px;" type="text" maxlength="2"  class="none" size="60" name="adbyby_update_hour" placeholder="23" value="<% nvram_get_x("","adbyby_update_hour"); %>" onKeyPress="return is_number(this,event);"/>时，<input style="width: 20px;" type="text" maxlength="2"  class="none" size="60" name="adbyby_update_min" placeholder="59" value="<% nvram_get_x("","adbyby_update_min"); %>" onKeyPress="return is_number(this,event);"/>分，更新
												&nbsp;<span style="color:#888;"></span>
												<div>&nbsp;<span style="color:#888;">注意：更新时可能会造成网游断线！</span></div>
											</td>
										</tr>
										
										<tr>
											<td colspan="3" >
												<i class="icon-hand-right"></i> <a href="javascript:spoiler_toggle('script9')"><span>Plus+ 模式过滤的域名:</span></a>
												<div id="script9">
													<textarea rows="8" wrap="off" spellcheck="false" maxlength="314571" class="span12" name="scripts.adbyby_adhost.sh" style="font-family:'Courier New'; font-size:12px;"><% nvram_dump("scripts.adbyby_adhost.sh",""); %></textarea>
												</div>
											</td>
										</tr>
										<tr>
											<td colspan="3" style="border-top: 0 none;">
												<i class="icon-hand-right"></i> <a href="javascript:spoiler_toggle('script10')"><span>域名白名单:</span></a>
												<div id="script10" style="display:none;">
													<textarea rows="24" wrap="off" spellcheck="false" maxlength="314571" class="span12" name="scripts.adbyby_adesc.sh" style="font-family:'Courier New'; font-size:12px;"><% nvram_dump("scripts.adbyby_adesc.sh",""); %></textarea>
												</div>
											</td>
										</tr>
										<tr>
											<td colspan="3" style="border-top: 0 none;">
												<i class="icon-hand-right"></i> <a href="javascript:spoiler_toggle('script11')"><span>IP黑名单:</span></a>
												<div id="script11" style="display:none;">
													<textarea rows="24" wrap="off" spellcheck="false" maxlength="314571" class="span12" name="scripts.adbyby_blockip.sh" style="font-family:'Courier New'; font-size:12px;"><% nvram_dump("scripts.adbyby_blockip.sh",""); %></textarea>
												</div>
											</td>
										</tr>
										<tr>
											<td colspan="3" style="border-top: 0 none;">
												<i class="icon-hand-right"></i> <a href="javascript:spoiler_toggle('script12')"><span>域名黑名单:</span></a>
												<div id="script12" style="display:none;">
													<textarea rows="24" wrap="off" spellcheck="false" maxlength="314571" class="span12" name="scripts.adbyby_adblack.sh" style="font-family:'Courier New'; font-size:12px;"><% nvram_dump("scripts.adbyby_adblack.sh",""); %></textarea>
												</div>
											</td>
										</tr>
										<tr>
											<td colspan="3" style="border-top: 0 none;">
												<i class="icon-hand-right"></i> <a href="javascript:spoiler_toggle('script13')"><span>用户自定义规则:</span></a>
												<div id="script13" style="display:none;">
													<textarea rows="8" wrap="off" spellcheck="false" maxlength="314571" class="span12" name="scripts.adbyby_rules.sh" style="font-family:'Courier New'; font-size:12px;"><% nvram_dump("scripts.adbyby_rules.sh",""); %></textarea>
												</div>
											</td>
										</tr>
										<!--
										<tr id="ad_config">
											<td colspan="3" style="border-top: 0 none;">
												<i class="icon-hand-right"></i> <a href="javascript:spoiler_toggle('script14')"><span>点这里自定义内网 IP 过滤广告控制功能、订阅第三方自定义规则</span></a>
												<div id="script14" style="display:none;">
													<textarea rows="24" wrap="off" spellcheck="false" maxlength="314571" class="span12" name="scripts.adbyby_config_script.sh" style="font-family:'Courier New'; font-size:12px;"><% nvram_dump("scripts.adbyby_config_script.sh",""); %></textarea>
												</div>
											</td>
										</tr>-->
										<tr>
											<td colspan="2" style="border-top: 0 none;">
												<br />
												<center><input class="btn btn-primary" style="width: 219px" type="button" value="<#CTL_apply#>" onclick="applyRule()" /></center>
											</td>
										</tr>
									</table>
								</div>
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>

	</form>

	<div id="footer"></div>
</div>
<form method="post" name="adbyby_action" action="">
    <input type="hidden" name="connect_action" value="">
</form>
</body>
</html>