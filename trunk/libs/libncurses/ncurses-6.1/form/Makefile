# $Id: Makefile.in,v 1.64 2018/01/15 19:28:45 tom Exp $
##############################################################################
# Copyright (c) 1998-2015,2018 Free Software Foundation, Inc.                #
#                                                                            #
# Permission is hereby granted, free of charge, to any person obtaining a    #
# copy of this software and associated documentation files (the "Software"), #
# to deal in the Software without restriction, including without limitation  #
# the rights to use, copy, modify, merge, publish, distribute, distribute    #
# with modifications, sublicense, and/or sell copies of the Software, and to #
# permit persons to whom the Software is furnished to do so, subject to the  #
# following conditions:                                                      #
#                                                                            #
# The above copyright notice and this permission notice shall be included in #
# all copies or substantial portions of the Software.                        #
#                                                                            #
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR #
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   #
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    #
# THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      #
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING    #
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER        #
# DEALINGS IN THE SOFTWARE.                                                  #
#                                                                            #
# Except as contained in this notice, the name(s) of the above copyright     #
# holders shall not be used in advertising or otherwise to promote the sale, #
# use or other dealings in this Software without prior written               #
# authorization.                                                             #
##############################################################################
#
# Author: Thomas E. Dickey 1996-on
#
# Makefile for form source code.
#
# This makes the following:
#	libraries (normal/debug/profile/shared)
#
# The variable 'srcdir' refers to the source-distribution, and can be set with
# the configure script by "--srcdir=DIR".
#
# The rules are organized to produce the libraries for the configured models,

# turn off _all_ suffix rules; we'll generate our own
.SUFFIXES:

SHELL		= /bin/bash

THIS		= Makefile

x		= 
o		= .o

MODEL		= shared
DESTDIR		= /opt/rt-n56u/trunk/stage
top_srcdir	= ..
srcdir		= .
prefix		= /opt/rt-n56u/trunk/stage
exec_prefix	= ${prefix}
bindir		= ${exec_prefix}/bin
libdir		= ${exec_prefix}/lib
includedir	= ${prefix}/include
includesubdir	= 

INCLUDEDIR	= $(DESTDIR)$(includedir)$(includesubdir)

PACKAGE		= ncursesw

LIBTOOL		= 
LIBTOOL_OPTS	=  
LIBTOOL_CLEAN	= 
LIBTOOL_COMPILE	= 
LIBTOOL_LINK	= ${CC}
LIBTOOL_INSTALL	= 
LIBTOOL_UNINSTALL = 
LT_UNDEF	= 

INSTALL		= /usr/bin/install -c
INSTALL_LIB	= /usr/bin/install -c -m 644
INSTALL_PROG	= ${INSTALL} -s
INSTALL_DATA	= ${INSTALL} -m 644

AR		= /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x/bin/mipsel-linux-uclibc-ar
ARFLAGS		= -curvU
AWK		= mawk
LD		= /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x/bin/mipsel-linux-uclibc-ld
LN_S		= ln -s -f

CTAGS		= 
ETAGS		= 

CC		= /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x/bin/mipsel-linux-uclibc-gcc -mips32r2 -march=mips32r2
CPP		= /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x/bin/mipsel-linux-uclibc-gcc -mips32r2 -march=mips32r2 -E
CFLAGS		= -Os -fomit-frame-pointer -pipe  -DEMBED -I/opt/rt-n56u/trunk/stage/include -Dlinux -D__linux__ -Dunix -Wall -Wno-trigraphs -Wno-strict-aliasing -Wno-format-security   -Wno-pointer-sign -ffunction-sections -fdata-sections --param max-inline-insns-single=1200 -mips32r2 -march=mips32r2

CPPFLAGS	= -I${top_srcdir}/ncurses -DHAVE_CONFIG_H -I. -I../include  -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64  -DNDEBUG -Dlinux

CCFLAGS		= $(CPPFLAGS) $(CFLAGS)

CFLAGS_LIBTOOL	= $(CCFLAGS)
CFLAGS_NORMAL	= $(CCFLAGS)
CFLAGS_DEBUG	= $(CCFLAGS) -g -DTRACE
CFLAGS_PROFILE	= $(CCFLAGS) -pg
CFLAGS_SHARED	= $(CCFLAGS) -fPIC

CFLAGS_DEFAULT	= $(CFLAGS_SHARED)

LINK		= $(LIBTOOL_LINK)
LDFLAGS		=  -L/opt/rt-n56u/trunk/stage/lib -Wl,--gc-sections  

SHLIB_DIRS	= -L../lib
SHLIB_LIST	= $(SHLIB_DIRS) -lncursesw 

RPATH_LIST	= ${libdir}
RESULTING_SYMS	= 
VERSIONED_SYMS	= 
MK_SHARED_LIB	= ${CC} ${LDFLAGS} ${CFLAGS} -shared -Wl,-soname,`basename $@ .${REL_VERSION}`.${ABI_VERSION},-stats,-lc -o $@

NCURSES_MAJOR	= 6
NCURSES_MINOR	= 1
REL_VERSION	= 6.1
ABI_VERSION	= 6

RANLIB		= /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x/bin/mipsel-linux-uclibc-ranlib

LIBRARIES	=  ../lib/libformw.so.${REL_VERSION} ../lib/libformw.a

LINT		= 
LINT_OPTS	= 
LINT_LIBS	= -lform -lncurses 

AUTO_SRC	= \
		../include/form.h

################################################################################
all \
libs \
install ::	$(AUTO_SRC) $(LIBRARIES)

sources :	$(AUTO_SRC)

$(DESTDIR)$(bindir) \
$(DESTDIR)$(libdir) :
	mkdir -p $@

# make copies to simplify include-paths while still keeping form's include
# file in this directory.
../include/form.h : $(srcdir)/form.h
	-rm -f $@
	cp $(srcdir)/form.h $@

HEADER_DEPS = \
	$(srcdir)/form.priv.h \
	$(srcdir)/form.h \
	../include/mf_common.h \
	../include/curses.h \
	../include/eti.h

tags:
	$(CTAGS) *.[ch]

#TAGS:
#	$(ETAGS) *.[ch]

mostlyclean ::
	-rm -f core tags TAGS *~ *.bak *.i *.ln *.atac trace

clean :: mostlyclean
	-rm -f $(AUTO_SRC)

distclean :: clean
	-rm -f Makefile
	-rm -rf .libs *.dSYM

realclean :: distclean

../include/mf_common.h \
../include/eti.h :
	cd ../menu && $(MAKE) $@

###############################################################################
# The remainder of this file is automatically generated during configuration
###############################################################################

# Generated by CF_LIB_RULES
resulting.map: 
	mawk 'BEGIN { skip = 1; last=""; } /deprecated in ABI6/ { next; }{ sub("NCURSES([WT]+)?", "&6"); } { if ( last != "" && ( skip == 0 || $$0 !~ /}/ ) ) { print last; } skip = 0; last = $$0; } END { print last; }' <  >$@

distclean::
	rm -f resulting.map

# generated by mk-0th.awk
#   libname:    formw
#   subsets:    termlib+ext_tinfo+base+widechar+ext_funcs

.SUFFIXES: .c .cc .h .i .ii
.c.i :
	$(CPP) $(CPPFLAGS) $< >$@
.cc.ii :
	$(CPP) $(CPPFLAGS) $< >$@
.h.i :
	$(CPP) $(CPPFLAGS) $< >$@

C_SRC = \
	$(srcdir)/f_trace.c \
	$(srcdir)/fld_arg.c \
	$(srcdir)/fld_attr.c \
	$(srcdir)/fld_current.c \
	$(srcdir)/fld_def.c \
	$(srcdir)/fld_dup.c \
	$(srcdir)/fld_ftchoice.c \
	$(srcdir)/fld_ftlink.c \
	$(srcdir)/fld_info.c \
	$(srcdir)/fld_just.c \
	$(srcdir)/fld_link.c \
	$(srcdir)/fld_max.c \
	$(srcdir)/fld_move.c \
	$(srcdir)/fld_newftyp.c \
	$(srcdir)/fld_opts.c \
	$(srcdir)/fld_pad.c \
	$(srcdir)/fld_page.c \
	$(srcdir)/fld_stat.c \
	$(srcdir)/fld_type.c \
	$(srcdir)/fld_user.c \
	$(srcdir)/frm_cursor.c \
	$(srcdir)/frm_data.c \
	$(srcdir)/frm_def.c \
	$(srcdir)/frm_driver.c \
	$(srcdir)/frm_hook.c \
	$(srcdir)/frm_opts.c \
	$(srcdir)/frm_page.c \
	$(srcdir)/frm_post.c \
	$(srcdir)/frm_req_name.c \
	$(srcdir)/frm_scale.c \
	$(srcdir)/frm_sub.c \
	$(srcdir)/frm_user.c \
	$(srcdir)/frm_win.c \
	$(srcdir)/fty_alnum.c \
	$(srcdir)/fty_alpha.c \
	$(srcdir)/fty_enum.c \
	$(srcdir)/fty_generic.c \
	$(srcdir)/fty_int.c \
	$(srcdir)/fty_ipv4.c \
	$(srcdir)/fty_num.c \
	$(srcdir)/fty_regex.c

# Producing llib-lformw is time-consuming, so there's no direct-dependency for
# it in the lintlib rule.  We'll only remove in the cleanest setup.

FORMW_SRC = \
	$(srcdir)/f_trace.c \
	$(srcdir)/fld_arg.c \
	$(srcdir)/fld_attr.c \
	$(srcdir)/fld_current.c \
	$(srcdir)/fld_def.c \
	$(srcdir)/fld_dup.c \
	$(srcdir)/fld_ftchoice.c \
	$(srcdir)/fld_ftlink.c \
	$(srcdir)/fld_info.c \
	$(srcdir)/fld_just.c \
	$(srcdir)/fld_link.c \
	$(srcdir)/fld_max.c \
	$(srcdir)/fld_move.c \
	$(srcdir)/fld_newftyp.c \
	$(srcdir)/fld_opts.c \
	$(srcdir)/fld_pad.c \
	$(srcdir)/fld_page.c \
	$(srcdir)/fld_stat.c \
	$(srcdir)/fld_type.c \
	$(srcdir)/fld_user.c \
	$(srcdir)/frm_cursor.c \
	$(srcdir)/frm_data.c \
	$(srcdir)/frm_def.c \
	$(srcdir)/frm_driver.c \
	$(srcdir)/frm_hook.c \
	$(srcdir)/frm_opts.c \
	$(srcdir)/frm_page.c \
	$(srcdir)/frm_post.c \
	$(srcdir)/frm_req_name.c \
	$(srcdir)/frm_scale.c \
	$(srcdir)/frm_sub.c \
	$(srcdir)/frm_user.c \
	$(srcdir)/frm_win.c \
	$(srcdir)/fty_alnum.c \
	$(srcdir)/fty_alpha.c \
	$(srcdir)/fty_enum.c \
	$(srcdir)/fty_generic.c \
	$(srcdir)/fty_int.c \
	$(srcdir)/fty_ipv4.c \
	$(srcdir)/fty_num.c \
	$(srcdir)/fty_regex.c

clean ::
	rm -f llib-lformw.*

realclean ::
	rm -f llib-lformw

llib-lformw : $(FORMW_SRC)
	cproto -a -l -DNCURSES_ENABLE_STDBOOL_H=0 -DLINT $(CPPFLAGS) $(FORMW_SRC) >$@

lintlib ::
	sh $(srcdir)/../misc/makellib formw $(CPPFLAGS)

lint ::
	$(LINT) $(LINT_OPTS) $(CPPFLAGS) $(FORMW_SRC) $(LINT_LIBS)

# generated by mk-1st.awk (subset=termlib+ext_tinfo+base+widechar+ext_funcs)
#  name:          formw
#  traces:        DEBUG
#  MODEL:         SHARED
#  CXX_MODEL:     NORMAL
#  model:         obj_s
#  prefix:        lib
#  suffix:        .so
#  subset:        termlib+ext_tinfo+base+widechar+ext_funcs
#  driver:        no
#  ShlibVer:      rel
#  ShlibVerInfix: no
#  SymLink:       ln -s -f
#  TermlibRoot:   ncursesw
#  TermlibSuffix: .so
#  ReLink:        yes
#  DoLinks:       yes
#  rmSoLocs:      no
#  ldconfig:      :
#  overwrite:     yes
#  depend:        ../include/ncurses_cfg.h ./form.priv.h
#  host:          mipsel-unknown-linux-gnu

SHARED_OBJS = \
	../obj_s/fld_arg$o \
	../obj_s/fld_attr$o \
	../obj_s/fld_current$o \
	../obj_s/fld_def$o \
	../obj_s/fld_dup$o \
	../obj_s/fld_ftchoice$o \
	../obj_s/fld_ftlink$o \
	../obj_s/fld_info$o \
	../obj_s/fld_just$o \
	../obj_s/fld_link$o \
	../obj_s/fld_max$o \
	../obj_s/fld_move$o \
	../obj_s/fld_newftyp$o \
	../obj_s/fld_opts$o \
	../obj_s/fld_pad$o \
	../obj_s/fld_page$o \
	../obj_s/fld_stat$o \
	../obj_s/fld_type$o \
	../obj_s/fld_user$o \
	../obj_s/frm_cursor$o \
	../obj_s/frm_data$o \
	../obj_s/frm_def$o \
	../obj_s/frm_driver$o \
	../obj_s/frm_hook$o \
	../obj_s/frm_opts$o \
	../obj_s/frm_page$o \
	../obj_s/frm_post$o \
	../obj_s/frm_req_name$o \
	../obj_s/frm_scale$o \
	../obj_s/frm_sub$o \
	../obj_s/frm_user$o \
	../obj_s/frm_win$o \
	../obj_s/fty_alnum$o \
	../obj_s/fty_alpha$o \
	../obj_s/fty_enum$o \
	../obj_s/fty_generic$o \
	../obj_s/fty_int$o \
	../obj_s/fty_ipv4$o \
	../obj_s/fty_num$o \
	../obj_s/fty_regex$o

$(SHARED_OBJS) : ../include/ncurses_cfg.h ./form.priv.h

../lib/libformw.so.$(REL_VERSION) : \
		../lib \
		$(RESULTING_SYMS) $(SHARED_OBJS)
	@echo linking $@
	$(MK_SHARED_LIB) $(SHARED_OBJS) $(SHLIB_LIST)
	cd ../lib && ($(LN_S) libformw.so.$(REL_VERSION) libformw.so.$(ABI_VERSION); $(LN_S) libformw.so.$(ABI_VERSION) libformw.so; )

install \
install.libs \
install.formw :: $(DESTDIR)$(libdir)/libformw.so.$(REL_VERSION)

$(DESTDIR)$(libdir)/libformw.so.$(REL_VERSION) : \
		$(DESTDIR)$(libdir) \
		$(RESULTING_SYMS) $(SHARED_OBJS)
	@echo linking $@
	$(MK_SHARED_LIB) $(SHARED_OBJS) $(SHLIB_LIST)
	cd $(DESTDIR)$(libdir) && ($(LN_S) libformw.so.$(REL_VERSION) libformw.so.$(ABI_VERSION); $(LN_S) libformw.so.$(ABI_VERSION) libformw.so; )

uninstall \
uninstall.libs \
uninstall.formw ::
	@echo uninstalling $(DESTDIR)$(libdir)/libformw.so.$(REL_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libformw.so.$(REL_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libformw.so.$(ABI_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libformw.so

clean ::
	-rm -f ../lib/libformw.so.$(REL_VERSION)
	-rm -f ../lib/libformw.so.$(ABI_VERSION)
	-rm -f ../lib/libformw.so

mostlyclean::
	-rm -f $(SHARED_OBJS)

# generated by mk-2nd.awk
#   model:      obj_s
#   MODEL:      SHARED
#   echo:       yes
#   subset:     termlib+ext_tinfo+base+widechar+ext_funcs
#   crenames:   yes
#   cxxrenames: yes
#   traces:     DEBUG
#   srcdir:     .

../obj_s/fld_arg$o :	$(srcdir)/fld_arg.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_arg.c -o ../obj_s/fld_arg$o

../obj_s/fld_attr$o :	$(srcdir)/fld_attr.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_attr.c -o ../obj_s/fld_attr$o

../obj_s/fld_current$o :	$(srcdir)/fld_current.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_current.c -o ../obj_s/fld_current$o

../obj_s/fld_def$o :	$(srcdir)/fld_def.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_def.c -o ../obj_s/fld_def$o

../obj_s/fld_dup$o :	$(srcdir)/fld_dup.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_dup.c -o ../obj_s/fld_dup$o

../obj_s/fld_ftchoice$o :	$(srcdir)/fld_ftchoice.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_ftchoice.c -o ../obj_s/fld_ftchoice$o

../obj_s/fld_ftlink$o :	$(srcdir)/fld_ftlink.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_ftlink.c -o ../obj_s/fld_ftlink$o

../obj_s/fld_info$o :	$(srcdir)/fld_info.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_info.c -o ../obj_s/fld_info$o

../obj_s/fld_just$o :	$(srcdir)/fld_just.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_just.c -o ../obj_s/fld_just$o

../obj_s/fld_link$o :	$(srcdir)/fld_link.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_link.c -o ../obj_s/fld_link$o

../obj_s/fld_max$o :	$(srcdir)/fld_max.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_max.c -o ../obj_s/fld_max$o

../obj_s/fld_move$o :	$(srcdir)/fld_move.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_move.c -o ../obj_s/fld_move$o

../obj_s/fld_newftyp$o :	$(srcdir)/fld_newftyp.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_newftyp.c -o ../obj_s/fld_newftyp$o

../obj_s/fld_opts$o :	$(srcdir)/fld_opts.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_opts.c -o ../obj_s/fld_opts$o

../obj_s/fld_pad$o :	$(srcdir)/fld_pad.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_pad.c -o ../obj_s/fld_pad$o

../obj_s/fld_page$o :	$(srcdir)/fld_page.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_page.c -o ../obj_s/fld_page$o

../obj_s/fld_stat$o :	$(srcdir)/fld_stat.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_stat.c -o ../obj_s/fld_stat$o

../obj_s/fld_type$o :	$(srcdir)/fld_type.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_type.c -o ../obj_s/fld_type$o

../obj_s/fld_user$o :	$(srcdir)/fld_user.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fld_user.c -o ../obj_s/fld_user$o

../obj_s/frm_cursor$o :	$(srcdir)/frm_cursor.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_cursor.c -o ../obj_s/frm_cursor$o

../obj_s/frm_data$o :	$(srcdir)/frm_data.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_data.c -o ../obj_s/frm_data$o

../obj_s/frm_def$o :	$(srcdir)/frm_def.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_def.c -o ../obj_s/frm_def$o

../obj_s/frm_driver$o :	$(srcdir)/frm_driver.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_driver.c -o ../obj_s/frm_driver$o

../obj_s/frm_hook$o :	$(srcdir)/frm_hook.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_hook.c -o ../obj_s/frm_hook$o

../obj_s/frm_opts$o :	$(srcdir)/frm_opts.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_opts.c -o ../obj_s/frm_opts$o

../obj_s/frm_page$o :	$(srcdir)/frm_page.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_page.c -o ../obj_s/frm_page$o

../obj_s/frm_post$o :	$(srcdir)/frm_post.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_post.c -o ../obj_s/frm_post$o

../obj_s/frm_req_name$o :	$(srcdir)/frm_req_name.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_req_name.c -o ../obj_s/frm_req_name$o

../obj_s/frm_scale$o :	$(srcdir)/frm_scale.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_scale.c -o ../obj_s/frm_scale$o

../obj_s/frm_sub$o :	$(srcdir)/frm_sub.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_sub.c -o ../obj_s/frm_sub$o

../obj_s/frm_user$o :	$(srcdir)/frm_user.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_user.c -o ../obj_s/frm_user$o

../obj_s/frm_win$o :	$(srcdir)/frm_win.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/frm_win.c -o ../obj_s/frm_win$o

../obj_s/fty_alnum$o :	$(srcdir)/fty_alnum.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_alnum.c -o ../obj_s/fty_alnum$o

../obj_s/fty_alpha$o :	$(srcdir)/fty_alpha.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_alpha.c -o ../obj_s/fty_alpha$o

../obj_s/fty_enum$o :	$(srcdir)/fty_enum.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_enum.c -o ../obj_s/fty_enum$o

../obj_s/fty_generic$o :	$(srcdir)/fty_generic.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_generic.c -o ../obj_s/fty_generic$o

../obj_s/fty_int$o :	$(srcdir)/fty_int.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_int.c -o ../obj_s/fty_int$o

../obj_s/fty_ipv4$o :	$(srcdir)/fty_ipv4.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_ipv4.c -o ../obj_s/fty_ipv4$o

../obj_s/fty_num$o :	$(srcdir)/fty_num.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_num.c -o ../obj_s/fty_num$o

../obj_s/fty_regex$o :	$(srcdir)/fty_regex.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_SHARED) -c ../form/fty_regex.c -o ../obj_s/fty_regex$o


# generated by mk-1st.awk (subset=termlib+ext_tinfo+base+widechar+ext_funcs)
#  name:          formw
#  traces:        DEBUG
#  MODEL:         NORMAL
#  CXX_MODEL:     NORMAL
#  model:         objects
#  prefix:        lib
#  suffix:        .a
#  subset:        termlib+ext_tinfo+base+widechar+ext_funcs
#  driver:        no
#  ShlibVer:      rel
#  ShlibVerInfix: no
#  SymLink:       ln -s -f
#  TermlibRoot:   ncursesw
#  TermlibSuffix: .so
#  ReLink:        yes
#  DoLinks:       yes
#  rmSoLocs:      no
#  ldconfig:      :
#  overwrite:     yes
#  depend:        ../include/ncurses_cfg.h ./form.priv.h
#  host:          mipsel-unknown-linux-gnu

NORMAL_OBJS = \
	../objects/fld_arg$o \
	../objects/fld_attr$o \
	../objects/fld_current$o \
	../objects/fld_def$o \
	../objects/fld_dup$o \
	../objects/fld_ftchoice$o \
	../objects/fld_ftlink$o \
	../objects/fld_info$o \
	../objects/fld_just$o \
	../objects/fld_link$o \
	../objects/fld_max$o \
	../objects/fld_move$o \
	../objects/fld_newftyp$o \
	../objects/fld_opts$o \
	../objects/fld_pad$o \
	../objects/fld_page$o \
	../objects/fld_stat$o \
	../objects/fld_type$o \
	../objects/fld_user$o \
	../objects/frm_cursor$o \
	../objects/frm_data$o \
	../objects/frm_def$o \
	../objects/frm_driver$o \
	../objects/frm_hook$o \
	../objects/frm_opts$o \
	../objects/frm_page$o \
	../objects/frm_post$o \
	../objects/frm_req_name$o \
	../objects/frm_scale$o \
	../objects/frm_sub$o \
	../objects/frm_user$o \
	../objects/frm_win$o \
	../objects/fty_alnum$o \
	../objects/fty_alpha$o \
	../objects/fty_enum$o \
	../objects/fty_generic$o \
	../objects/fty_int$o \
	../objects/fty_ipv4$o \
	../objects/fty_num$o \
	../objects/fty_regex$o

$(NORMAL_OBJS) : ../include/ncurses_cfg.h ./form.priv.h

../lib/libformw.a : $(NORMAL_OBJS)
	$(AR) $(ARFLAGS) $@ $?
	$(RANLIB) $@

install \
install.libs \
install.formw :: $(DESTDIR)$(libdir) ../lib/libformw.a
	@echo installing ../lib/libformw.a as $(DESTDIR)$(libdir)/libformw.a
	$(INSTALL_DATA) ../lib/libformw.a $(DESTDIR)$(libdir)/libformw.a
	$(RANLIB) $(DESTDIR)$(libdir)/libformw.a

uninstall \
uninstall.libs \
uninstall.formw ::
	@echo uninstalling $(DESTDIR)$(libdir)/libformw.a
	-@rm -f $(DESTDIR)$(libdir)/libformw.a

clean ::
	-rm -f ../lib/libformw.a

mostlyclean::
	-rm -f $(NORMAL_OBJS)

# generated by mk-2nd.awk
#   model:      objects
#   MODEL:      NORMAL
#   echo:       yes
#   subset:     termlib+ext_tinfo+base+widechar+ext_funcs
#   crenames:   yes
#   cxxrenames: yes
#   traces:     DEBUG
#   srcdir:     .

../objects/fld_arg$o :	$(srcdir)/fld_arg.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_arg.c -o ../objects/fld_arg$o

../objects/fld_attr$o :	$(srcdir)/fld_attr.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_attr.c -o ../objects/fld_attr$o

../objects/fld_current$o :	$(srcdir)/fld_current.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_current.c -o ../objects/fld_current$o

../objects/fld_def$o :	$(srcdir)/fld_def.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_def.c -o ../objects/fld_def$o

../objects/fld_dup$o :	$(srcdir)/fld_dup.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_dup.c -o ../objects/fld_dup$o

../objects/fld_ftchoice$o :	$(srcdir)/fld_ftchoice.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_ftchoice.c -o ../objects/fld_ftchoice$o

../objects/fld_ftlink$o :	$(srcdir)/fld_ftlink.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_ftlink.c -o ../objects/fld_ftlink$o

../objects/fld_info$o :	$(srcdir)/fld_info.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_info.c -o ../objects/fld_info$o

../objects/fld_just$o :	$(srcdir)/fld_just.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_just.c -o ../objects/fld_just$o

../objects/fld_link$o :	$(srcdir)/fld_link.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_link.c -o ../objects/fld_link$o

../objects/fld_max$o :	$(srcdir)/fld_max.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_max.c -o ../objects/fld_max$o

../objects/fld_move$o :	$(srcdir)/fld_move.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_move.c -o ../objects/fld_move$o

../objects/fld_newftyp$o :	$(srcdir)/fld_newftyp.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_newftyp.c -o ../objects/fld_newftyp$o

../objects/fld_opts$o :	$(srcdir)/fld_opts.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_opts.c -o ../objects/fld_opts$o

../objects/fld_pad$o :	$(srcdir)/fld_pad.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_pad.c -o ../objects/fld_pad$o

../objects/fld_page$o :	$(srcdir)/fld_page.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_page.c -o ../objects/fld_page$o

../objects/fld_stat$o :	$(srcdir)/fld_stat.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_stat.c -o ../objects/fld_stat$o

../objects/fld_type$o :	$(srcdir)/fld_type.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_type.c -o ../objects/fld_type$o

../objects/fld_user$o :	$(srcdir)/fld_user.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_user.c -o ../objects/fld_user$o

../objects/frm_cursor$o :	$(srcdir)/frm_cursor.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_cursor.c -o ../objects/frm_cursor$o

../objects/frm_data$o :	$(srcdir)/frm_data.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_data.c -o ../objects/frm_data$o

../objects/frm_def$o :	$(srcdir)/frm_def.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_def.c -o ../objects/frm_def$o

../objects/frm_driver$o :	$(srcdir)/frm_driver.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_driver.c -o ../objects/frm_driver$o

../objects/frm_hook$o :	$(srcdir)/frm_hook.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_hook.c -o ../objects/frm_hook$o

../objects/frm_opts$o :	$(srcdir)/frm_opts.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_opts.c -o ../objects/frm_opts$o

../objects/frm_page$o :	$(srcdir)/frm_page.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_page.c -o ../objects/frm_page$o

../objects/frm_post$o :	$(srcdir)/frm_post.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_post.c -o ../objects/frm_post$o

../objects/frm_req_name$o :	$(srcdir)/frm_req_name.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_req_name.c -o ../objects/frm_req_name$o

../objects/frm_scale$o :	$(srcdir)/frm_scale.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_scale.c -o ../objects/frm_scale$o

../objects/frm_sub$o :	$(srcdir)/frm_sub.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_sub.c -o ../objects/frm_sub$o

../objects/frm_user$o :	$(srcdir)/frm_user.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_user.c -o ../objects/frm_user$o

../objects/frm_win$o :	$(srcdir)/frm_win.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_win.c -o ../objects/frm_win$o

../objects/fty_alnum$o :	$(srcdir)/fty_alnum.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_alnum.c -o ../objects/fty_alnum$o

../objects/fty_alpha$o :	$(srcdir)/fty_alpha.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_alpha.c -o ../objects/fty_alpha$o

../objects/fty_enum$o :	$(srcdir)/fty_enum.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_enum.c -o ../objects/fty_enum$o

../objects/fty_generic$o :	$(srcdir)/fty_generic.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_generic.c -o ../objects/fty_generic$o

../objects/fty_int$o :	$(srcdir)/fty_int.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_int.c -o ../objects/fty_int$o

../objects/fty_ipv4$o :	$(srcdir)/fty_ipv4.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_ipv4.c -o ../objects/fty_ipv4$o

../objects/fty_num$o :	$(srcdir)/fty_num.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_num.c -o ../objects/fty_num$o

../objects/fty_regex$o :	$(srcdir)/fty_regex.c \
			$(HEADER_DEPS)
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_regex.c -o ../objects/fty_regex$o


# generated by mk-hdr.awk
#  subset:     termlib+ext_tinfo+base+widechar+ext_funcs
#  compat:     yes

${INCLUDEDIR} :
	mkdir -p $@

install \
install.libs \
install.includes :: ${AUTO_SRC} ${INCLUDEDIR} \
		$(srcdir)/form.h
	@ (cd ${INCLUDEDIR} && rm -f form.h) ; ../headers.sh ${INSTALL_DATA} ${INCLUDEDIR} ${srcdir} $(srcdir)/form.h

uninstall \
uninstall.libs \
uninstall.includes ::
	-@ (cd ${INCLUDEDIR} && rm -f form.h)
depend : ${AUTO_SRC}
	makedepend -- ${CPPFLAGS} -- ${C_SRC}

# DO NOT DELETE THIS LINE -- make depend depends on it.
