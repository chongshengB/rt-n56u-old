
20190831更新内容:
增加adbyby plus+ 单独内网IP控制过滤模式。

### 固件特点 ###
* 源码来自 https://github.com/hanwckf/rt-n56u.git
在原固件基础上增加以下功能:
>-  增加MT7615 5.0.3.0驱动```CONFIG_FIRMWARE_WIFI_DRIVER=5.0.3.0```
>- [Adbyby Plus+]```CONFIG_FIRMWARE_INCLUDE_ADBYBY``` （取自lean https://github.com/coolsnowwolf/lede ）
>- [koolproxy]```CONFIG_FIRMWARE_INCLUDE_KOOLPROXY```
>- [aliddns]```CONFIG_FIRMWARE_INCLUDE_ALIDDNS```

- 已适配除官方适配外的以下机型
>- WR1200JS (128M,USB)
>- NEWIFI3 (512M,USB)
>- NEWIFI-MINI (28M,USB)
>- K2/PSG1218 (64M)
>- K2P_DRV/K2P_nano (128M)
>- MZ-R13 (64M)
>- MZ-R13P (64M)
>- HC5661A (128M)
>- OYE-001 (128M,USB)
>- MI-MINI (未测试,128M,USB)
>- MI-3 (未测试,128M,USB)
>- 5K-W20 (未测试,64M,USB)
>- JCG-AC860M (256M,USB)
>- DIR-882 (128M,USB)
>- Youku YK-L1 (128M,USB)

***

### 编译说明 ###

* 安装依赖包
```shell
sudo apt-get update
sudo apt-get install unzip libtool curl cmake gperf gawk flex bison nano \
git python-docutils gettext automake autopoint texinfo build-essential \
pkg-config zlib1g-dev libgmp3-dev libmpc-dev libmpfr-dev libncurses5-dev libltdl-dev
```
* 克隆源码
```shell
git clone --depth=1 https://github.com/chongshengB/rt-n56u.git /opt/rt-n56u
#git clone --depth=1 https://gitee.com/bkye/rt-n56u.git /opt/rt-n56u
```
* 编译工具链
```shell
cd /opt/rt-n56u/toolchain-mipsel
./clean_sources
./build_toolchain_3.4.x
```
* (可选)修改机型配置文件
```shell
nano /opt/rt-n56u/trunk/configs/templates/K2P.config
```
* 清理代码树并开始编译
```shell
cd /opt/rt-n56u/trunk
sudo ./clear_tree
sudo ./build_firmware_modify K2P
#脚本第一个参数为路由型号，在trunk/configs/templates/中
#编译好的固件在trunk/images里
```

***

### 请参阅 ###
- https://www.jianshu.com/p/cb51fb0fb2ac
- https://www.jianshu.com/p/6b8403cdea46
