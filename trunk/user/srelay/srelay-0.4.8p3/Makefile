#
#  Makefile
#  $Id: Makefile.in,v 1.6 2009/12/08 08:38:38 bulkstream Exp $
#

SHELL	= /bin/sh
prefix	= /usr
exec_prefix=${prefix}
srcdir	= .
sbindir	= ${exec_prefix}/sbin
libdir	= ${exec_prefix}/lib
sysconfdir = ${prefix}/etc
CC	= /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x/bin/mipsel-linux-uclibc-gcc -mips32r2 -march=mips32r2
CFLAGS	= -Os -fomit-frame-pointer -pipe  -Dlinux -D__linux__ -Dunix -DEMBED -I/opt/rt-n56u/trunk/stage/include -Wall -Wno-trigraphs -Wno-strict-aliasing -Wno-format-security   -Wno-pointer-sign -O2 -Wall -Wno-unused-result -Wno-unused-but-set-variable
CPPFLAGS= 
DEFS	= -DHAVE_CONFIG_H -DSYSCONFDIR=\"$(sysconfdir)\"
LDFLAGS	= -L/opt/rt-n56u/trunk/stage/lib -pthread
LIBS	= -lcrypt -L/usr/local/lib 
INCLUDES=
OBJS	= init.o readconf.o util.o socks.o relay.o main.o \
		auth-pwd.o get-bind.o
TARGET	= srelay

.c.o:
	$(CC) -I. $(CPPFLAGS) $(DEFS) $(CFLAGS) -c $<

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LIBS) $(LDFLAGS) -o $@

srelay.h: $(INCLUDES)
	@touch $@

clean:
	rm -f *.o *~  *.core core ktrace.out

distclean: clean
	rm -f $(TARGET)
	rm -f config.log config.status config.cache Makefile config.h
	rm -f *.orig *.rej
	rm -rf configure.lineno autom4te*.cache
	rm -f readconf

init.o: init.c srelay.h
readconf.o: readconf.c srelay.h
util.o: util.c srelay.h
socks.o: socks.c srelay.h
relay.o: relay.c srelay.h
main.o: main.c srelay.h
auth-pwd.o: auth-pwd.c srelay.h
get-bind.o: get-bind.c srelay.h
