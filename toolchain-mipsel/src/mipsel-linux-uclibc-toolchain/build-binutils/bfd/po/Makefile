# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2001, 2003, 2006, 2007, 2009 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.24

SHELL = /bin/sh


srcdir = ../../../binutils-2.24/bfd/po
top_srcdir = ../../../binutils-2.24/bfd
VPATH = ../../../binutils-2.24/bfd/po
top_builddir = ..

prefix = /opt/rt-n56u/toolchain-mipsel/toolchain-3.4.x
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = $(top_builddir)/../../binutils-2.24/bfd/../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O2 -Wno-pointer-sign -Wno-trigraphs -Wno-format-security -Wno-unused-but-set-variable -Wno-sizeof-pointer-memaccess -fno-delete-null-pointer-checks -fgnu89-inline
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/ja.po $(srcdir)/es.po $(srcdir)/sv.po $(srcdir)/da.po $(srcdir)/zh_CN.po $(srcdir)/ro.po $(srcdir)/rw.po $(srcdir)/vi.po $(srcdir)/fi.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/uk.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/ja.gmo $(srcdir)/es.gmo $(srcdir)/sv.gmo $(srcdir)/da.gmo $(srcdir)/zh_CN.gmo $(srcdir)/ro.gmo $(srcdir)/rw.gmo $(srcdir)/vi.gmo $(srcdir)/fi.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/uk.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	../../../binutils-2.24/bfd/aix386-core.c \
	../../../binutils-2.24/bfd/aix5ppc-core.c \
	../../../binutils-2.24/bfd/aout-adobe.c \
	../../../binutils-2.24/bfd/aout-arm.c \
	../../../binutils-2.24/bfd/aout-cris.c \
	../../../binutils-2.24/bfd/aout-ns32k.c \
	../../../binutils-2.24/bfd/aout-sparcle.c \
	../../../binutils-2.24/bfd/aout-target.h \
	../../../binutils-2.24/bfd/aout-tic30.c \
	../../../binutils-2.24/bfd/aout0.c \
	../../../binutils-2.24/bfd/aout32.c \
	../../../binutils-2.24/bfd/aout64.c \
	../../../binutils-2.24/bfd/aoutf1.h \
	../../../binutils-2.24/bfd/aoutx.h \
	../../../binutils-2.24/bfd/archive.c \
	../../../binutils-2.24/bfd/archive64.c \
	../../../binutils-2.24/bfd/archures.c \
	../../../binutils-2.24/bfd/armnetbsd.c \
	../../../binutils-2.24/bfd/bfd.c \
	../../../binutils-2.24/bfd/bfdio.c \
	../../../binutils-2.24/bfd/bfdwin.c \
	../../../binutils-2.24/bfd/binary.c \
	../../../binutils-2.24/bfd/bout.c \
	../../../binutils-2.24/bfd/cache.c \
	../../../binutils-2.24/bfd/cf-i386lynx.c \
	../../../binutils-2.24/bfd/cf-sparclynx.c \
	../../../binutils-2.24/bfd/cisco-core.c \
	../../../binutils-2.24/bfd/coff-alpha.c \
	../../../binutils-2.24/bfd/coff-apollo.c \
	../../../binutils-2.24/bfd/coff-arm.c \
	../../../binutils-2.24/bfd/coff-aux.c \
	../../../binutils-2.24/bfd/coff-go32.c \
	../../../binutils-2.24/bfd/coff-h8300.c \
	../../../binutils-2.24/bfd/coff-h8500.c \
	../../../binutils-2.24/bfd/coff-i386.c \
	../../../binutils-2.24/bfd/coff-i860.c \
	../../../binutils-2.24/bfd/coff-i960.c \
	../../../binutils-2.24/bfd/coff-m68k.c \
	../../../binutils-2.24/bfd/coff-m88k.c \
	../../../binutils-2.24/bfd/coff-mips.c \
	../../../binutils-2.24/bfd/coff-or32.c \
	../../../binutils-2.24/bfd/coff-rs6000.c \
	../../../binutils-2.24/bfd/coff-sh.c \
	../../../binutils-2.24/bfd/coff-sparc.c \
	../../../binutils-2.24/bfd/coff-stgo32.c \
	../../../binutils-2.24/bfd/coff-svm68k.c \
	../../../binutils-2.24/bfd/coff-tic30.c \
	../../../binutils-2.24/bfd/coff-tic4x.c \
	../../../binutils-2.24/bfd/coff-tic54x.c \
	../../../binutils-2.24/bfd/coff-tic80.c \
	../../../binutils-2.24/bfd/coff-u68k.c \
	../../../binutils-2.24/bfd/coff-w65.c \
	../../../binutils-2.24/bfd/coff-we32k.c \
	../../../binutils-2.24/bfd/coff-x86_64.c \
	../../../binutils-2.24/bfd/coff-z80.c \
	../../../binutils-2.24/bfd/coff-z8k.c \
	../../../binutils-2.24/bfd/coff64-rs6000.c \
	../../../binutils-2.24/bfd/coffcode.h \
	../../../binutils-2.24/bfd/coffgen.c \
	../../../binutils-2.24/bfd/cofflink.c \
	../../../binutils-2.24/bfd/coffswap.h \
	../../../binutils-2.24/bfd/compress.c \
	../../../binutils-2.24/bfd/corefile.c \
	../../../binutils-2.24/bfd/cpu-aarch64.c \
	../../../binutils-2.24/bfd/cpu-alpha.c \
	../../../binutils-2.24/bfd/cpu-arc.c \
	../../../binutils-2.24/bfd/cpu-arm.c \
	../../../binutils-2.24/bfd/cpu-avr.c \
	../../../binutils-2.24/bfd/cpu-bfin.c \
	../../../binutils-2.24/bfd/cpu-cr16.c \
	../../../binutils-2.24/bfd/cpu-cr16c.c \
	../../../binutils-2.24/bfd/cpu-cris.c \
	../../../binutils-2.24/bfd/cpu-crx.c \
	../../../binutils-2.24/bfd/cpu-d10v.c \
	../../../binutils-2.24/bfd/cpu-d30v.c \
	../../../binutils-2.24/bfd/cpu-dlx.c \
	../../../binutils-2.24/bfd/cpu-epiphany.c \
	../../../binutils-2.24/bfd/cpu-fr30.c \
	../../../binutils-2.24/bfd/cpu-frv.c \
	../../../binutils-2.24/bfd/cpu-h8300.c \
	../../../binutils-2.24/bfd/cpu-h8500.c \
	../../../binutils-2.24/bfd/cpu-hppa.c \
	../../../binutils-2.24/bfd/cpu-i370.c \
	../../../binutils-2.24/bfd/cpu-i386.c \
	../../../binutils-2.24/bfd/cpu-i860.c \
	../../../binutils-2.24/bfd/cpu-i960.c \
	../../../binutils-2.24/bfd/cpu-ia64.c \
	../../../binutils-2.24/bfd/cpu-ip2k.c \
	../../../binutils-2.24/bfd/cpu-iq2000.c \
	../../../binutils-2.24/bfd/cpu-k1om.c \
	../../../binutils-2.24/bfd/cpu-l1om.c \
	../../../binutils-2.24/bfd/cpu-lm32.c \
	../../../binutils-2.24/bfd/cpu-m10200.c \
	../../../binutils-2.24/bfd/cpu-m10300.c \
	../../../binutils-2.24/bfd/cpu-m32c.c \
	../../../binutils-2.24/bfd/cpu-m32r.c \
	../../../binutils-2.24/bfd/cpu-m68hc11.c \
	../../../binutils-2.24/bfd/cpu-m68hc12.c \
	../../../binutils-2.24/bfd/cpu-m68k.c \
	../../../binutils-2.24/bfd/cpu-m88k.c \
	../../../binutils-2.24/bfd/cpu-m9s12x.c \
	../../../binutils-2.24/bfd/cpu-m9s12xg.c \
	../../../binutils-2.24/bfd/cpu-mcore.c \
	../../../binutils-2.24/bfd/cpu-mep.c \
	../../../binutils-2.24/bfd/cpu-metag.c \
	../../../binutils-2.24/bfd/cpu-microblaze.c \
	../../../binutils-2.24/bfd/cpu-mips.c \
	../../../binutils-2.24/bfd/cpu-mmix.c \
	../../../binutils-2.24/bfd/cpu-moxie.c \
	../../../binutils-2.24/bfd/cpu-msp430.c \
	../../../binutils-2.24/bfd/cpu-mt.c \
	../../../binutils-2.24/bfd/cpu-nios2.c \
	../../../binutils-2.24/bfd/cpu-ns32k.c \
	../../../binutils-2.24/bfd/cpu-openrisc.c \
	../../../binutils-2.24/bfd/cpu-or32.c \
	../../../binutils-2.24/bfd/cpu-pdp11.c \
	../../../binutils-2.24/bfd/cpu-pj.c \
	../../../binutils-2.24/bfd/cpu-plugin.c \
	../../../binutils-2.24/bfd/cpu-powerpc.c \
	../../../binutils-2.24/bfd/cpu-rl78.c \
	../../../binutils-2.24/bfd/cpu-rs6000.c \
	../../../binutils-2.24/bfd/cpu-rx.c \
	../../../binutils-2.24/bfd/cpu-s390.c \
	../../../binutils-2.24/bfd/cpu-score.c \
	../../../binutils-2.24/bfd/cpu-sh.c \
	../../../binutils-2.24/bfd/cpu-sparc.c \
	../../../binutils-2.24/bfd/cpu-spu.c \
	../../../binutils-2.24/bfd/cpu-tic30.c \
	../../../binutils-2.24/bfd/cpu-tic4x.c \
	../../../binutils-2.24/bfd/cpu-tic54x.c \
	../../../binutils-2.24/bfd/cpu-tic6x.c \
	../../../binutils-2.24/bfd/cpu-tic80.c \
	../../../binutils-2.24/bfd/cpu-tilegx.c \
	../../../binutils-2.24/bfd/cpu-tilepro.c \
	../../../binutils-2.24/bfd/cpu-v850.c \
	../../../binutils-2.24/bfd/cpu-v850_rh850.c \
	../../../binutils-2.24/bfd/cpu-vax.c \
	../../../binutils-2.24/bfd/cpu-w65.c \
	../../../binutils-2.24/bfd/cpu-we32k.c \
	../../../binutils-2.24/bfd/cpu-xc16x.c \
	../../../binutils-2.24/bfd/cpu-xgate.c \
	../../../binutils-2.24/bfd/cpu-xstormy16.c \
	../../../binutils-2.24/bfd/cpu-xtensa.c \
	../../../binutils-2.24/bfd/cpu-z80.c \
	../../../binutils-2.24/bfd/cpu-z8k.c \
	../../../binutils-2.24/bfd/demo64.c \
	../../../binutils-2.24/bfd/dwarf1.c \
	../../../binutils-2.24/bfd/dwarf2.c \
	../../../binutils-2.24/bfd/ecoff.c \
	../../../binutils-2.24/bfd/ecofflink.c \
	../../../binutils-2.24/bfd/ecoffswap.h \
	../../../binutils-2.24/bfd/elf-attrs.c \
	../../../binutils-2.24/bfd/elf-bfd.h \
	../../../binutils-2.24/bfd/elf-eh-frame.c \
	../../../binutils-2.24/bfd/elf-hppa.h \
	../../../binutils-2.24/bfd/elf-ifunc.c \
	../../../binutils-2.24/bfd/elf-linux-psinfo.h \
	../../../binutils-2.24/bfd/elf-m10200.c \
	../../../binutils-2.24/bfd/elf-m10300.c \
	../../../binutils-2.24/bfd/elf-nacl.c \
	../../../binutils-2.24/bfd/elf-strtab.c \
	../../../binutils-2.24/bfd/elf-vxworks.c \
	../../../binutils-2.24/bfd/elf.c \
	../../../binutils-2.24/bfd/elf32-am33lin.c \
	../../../binutils-2.24/bfd/elf32-arc.c \
	../../../binutils-2.24/bfd/elf32-arm.c \
	../../../binutils-2.24/bfd/elf32-avr.c \
	../../../binutils-2.24/bfd/elf32-bfin.c \
	../../../binutils-2.24/bfd/elf32-cr16.c \
	../../../binutils-2.24/bfd/elf32-cr16c.c \
	../../../binutils-2.24/bfd/elf32-cris.c \
	../../../binutils-2.24/bfd/elf32-crx.c \
	../../../binutils-2.24/bfd/elf32-d10v.c \
	../../../binutils-2.24/bfd/elf32-d30v.c \
	../../../binutils-2.24/bfd/elf32-dlx.c \
	../../../binutils-2.24/bfd/elf32-epiphany.c \
	../../../binutils-2.24/bfd/elf32-fr30.c \
	../../../binutils-2.24/bfd/elf32-frv.c \
	../../../binutils-2.24/bfd/elf32-gen.c \
	../../../binutils-2.24/bfd/elf32-h8300.c \
	../../../binutils-2.24/bfd/elf32-hppa.c \
	../../../binutils-2.24/bfd/elf32-hppa.h \
	../../../binutils-2.24/bfd/elf32-i370.c \
	../../../binutils-2.24/bfd/elf32-i386.c \
	../../../binutils-2.24/bfd/elf32-i860.c \
	../../../binutils-2.24/bfd/elf32-i960.c \
	../../../binutils-2.24/bfd/elf32-ip2k.c \
	../../../binutils-2.24/bfd/elf32-iq2000.c \
	../../../binutils-2.24/bfd/elf32-lm32.c \
	../../../binutils-2.24/bfd/elf32-m32c.c \
	../../../binutils-2.24/bfd/elf32-m32r.c \
	../../../binutils-2.24/bfd/elf32-m68hc11.c \
	../../../binutils-2.24/bfd/elf32-m68hc12.c \
	../../../binutils-2.24/bfd/elf32-m68hc1x.c \
	../../../binutils-2.24/bfd/elf32-m68k.c \
	../../../binutils-2.24/bfd/elf32-m88k.c \
	../../../binutils-2.24/bfd/elf32-mcore.c \
	../../../binutils-2.24/bfd/elf32-mep.c \
	../../../binutils-2.24/bfd/elf32-metag.c \
	../../../binutils-2.24/bfd/elf32-microblaze.c \
	../../../binutils-2.24/bfd/elf32-mips.c \
	../../../binutils-2.24/bfd/elf32-moxie.c \
	../../../binutils-2.24/bfd/elf32-msp430.c \
	../../../binutils-2.24/bfd/elf32-mt.c \
	../../../binutils-2.24/bfd/elf32-nios2.c \
	../../../binutils-2.24/bfd/elf32-openrisc.c \
	../../../binutils-2.24/bfd/elf32-or32.c \
	../../../binutils-2.24/bfd/elf32-pj.c \
	../../../binutils-2.24/bfd/elf32-ppc.c \
	../../../binutils-2.24/bfd/elf32-rl78.c \
	../../../binutils-2.24/bfd/elf32-rx.c \
	../../../binutils-2.24/bfd/elf32-s390.c \
	../../../binutils-2.24/bfd/elf32-score.c \
	../../../binutils-2.24/bfd/elf32-score7.c \
	../../../binutils-2.24/bfd/elf32-sh-symbian.c \
	../../../binutils-2.24/bfd/elf32-sh.c \
	../../../binutils-2.24/bfd/elf32-sh64-com.c \
	../../../binutils-2.24/bfd/elf32-sh64.c \
	../../../binutils-2.24/bfd/elf32-sparc.c \
	../../../binutils-2.24/bfd/elf32-spu.c \
	../../../binutils-2.24/bfd/elf32-tic6x.c \
	../../../binutils-2.24/bfd/elf32-tilegx.c \
	../../../binutils-2.24/bfd/elf32-tilepro.c \
	../../../binutils-2.24/bfd/elf32-v850.c \
	../../../binutils-2.24/bfd/elf32-vax.c \
	../../../binutils-2.24/bfd/elf32-xc16x.c \
	../../../binutils-2.24/bfd/elf32-xgate.c \
	../../../binutils-2.24/bfd/elf32-xstormy16.c \
	../../../binutils-2.24/bfd/elf32-xtensa.c \
	../../../binutils-2.24/bfd/elf32.c \
	../../../binutils-2.24/bfd/elf64-alpha.c \
	../../../binutils-2.24/bfd/elf64-gen.c \
	../../../binutils-2.24/bfd/elf64-hppa.c \
	../../../binutils-2.24/bfd/elf64-hppa.h \
	../../../binutils-2.24/bfd/elf64-ia64-vms.c \
	../../../binutils-2.24/bfd/elf64-mips.c \
	../../../binutils-2.24/bfd/elf64-mmix.c \
	../../../binutils-2.24/bfd/elf64-ppc.c \
	../../../binutils-2.24/bfd/elf64-s390.c \
	../../../binutils-2.24/bfd/elf64-sh64.c \
	../../../binutils-2.24/bfd/elf64-sparc.c \
	../../../binutils-2.24/bfd/elf64-tilegx.c \
	../../../binutils-2.24/bfd/elf64-x86-64.c \
	../../../binutils-2.24/bfd/elf64.c \
	../../../binutils-2.24/bfd/elfcode.h \
	../../../binutils-2.24/bfd/elfcore.h \
	../../../binutils-2.24/bfd/elflink.c \
	../../../binutils-2.24/bfd/elfn32-mips.c \
	../../../binutils-2.24/bfd/elfxx-aarch64.c \
	../../../binutils-2.24/bfd/elfxx-ia64.c \
	../../../binutils-2.24/bfd/elfxx-mips.c \
	../../../binutils-2.24/bfd/elfxx-sparc.c \
	../../../binutils-2.24/bfd/elfxx-tilegx.c \
	../../../binutils-2.24/bfd/epoc-pe-arm.c \
	../../../binutils-2.24/bfd/epoc-pei-arm.c \
	../../../binutils-2.24/bfd/format.c \
	../../../binutils-2.24/bfd/freebsd.h \
	../../../binutils-2.24/bfd/genlink.h \
	../../../binutils-2.24/bfd/go32stub.h \
	../../../binutils-2.24/bfd/hash.c \
	../../../binutils-2.24/bfd/hp300bsd.c \
	../../../binutils-2.24/bfd/hp300hpux.c \
	../../../binutils-2.24/bfd/hpux-core.c \
	../../../binutils-2.24/bfd/i386aout.c \
	../../../binutils-2.24/bfd/i386bsd.c \
	../../../binutils-2.24/bfd/i386dynix.c \
	../../../binutils-2.24/bfd/i386freebsd.c \
	../../../binutils-2.24/bfd/i386linux.c \
	../../../binutils-2.24/bfd/i386lynx.c \
	../../../binutils-2.24/bfd/i386mach3.c \
	../../../binutils-2.24/bfd/i386msdos.c \
	../../../binutils-2.24/bfd/i386netbsd.c \
	../../../binutils-2.24/bfd/i386os9k.c \
	../../../binutils-2.24/bfd/ieee.c \
	../../../binutils-2.24/bfd/ihex.c \
	../../../binutils-2.24/bfd/init.c \
	../../../binutils-2.24/bfd/irix-core.c \
	../../../binutils-2.24/bfd/libaout.h \
	../../../binutils-2.24/bfd/libbfd.c \
	../../../binutils-2.24/bfd/libbfd.h \
	../../../binutils-2.24/bfd/libcoff.h \
	../../../binutils-2.24/bfd/libecoff.h \
	../../../binutils-2.24/bfd/libhppa.h \
	../../../binutils-2.24/bfd/libieee.h \
	../../../binutils-2.24/bfd/libnlm.h \
	../../../binutils-2.24/bfd/liboasys.h \
	../../../binutils-2.24/bfd/libpei.h \
	../../../binutils-2.24/bfd/libxcoff.h \
	../../../binutils-2.24/bfd/linker.c \
	../../../binutils-2.24/bfd/lynx-core.c \
	../../../binutils-2.24/bfd/m68k4knetbsd.c \
	../../../binutils-2.24/bfd/m68klinux.c \
	../../../binutils-2.24/bfd/m68knetbsd.c \
	../../../binutils-2.24/bfd/m88kmach3.c \
	../../../binutils-2.24/bfd/m88kopenbsd.c \
	../../../binutils-2.24/bfd/mach-o-i386.c \
	../../../binutils-2.24/bfd/mach-o-x86-64.c \
	../../../binutils-2.24/bfd/mach-o.c \
	../../../binutils-2.24/bfd/mach-o.h \
	../../../binutils-2.24/bfd/merge.c \
	../../../binutils-2.24/bfd/mipsbsd.c \
	../../../binutils-2.24/bfd/mmo.c \
	../../../binutils-2.24/bfd/netbsd.h \
	../../../binutils-2.24/bfd/newsos3.c \
	../../../binutils-2.24/bfd/nlm-target.h \
	../../../binutils-2.24/bfd/nlm.c \
	../../../binutils-2.24/bfd/nlm32-alpha.c \
	../../../binutils-2.24/bfd/nlm32-i386.c \
	../../../binutils-2.24/bfd/nlm32-ppc.c \
	../../../binutils-2.24/bfd/nlm32-sparc.c \
	../../../binutils-2.24/bfd/nlm32.c \
	../../../binutils-2.24/bfd/nlm64.c \
	../../../binutils-2.24/bfd/nlmcode.h \
	../../../binutils-2.24/bfd/nlmswap.h \
	../../../binutils-2.24/bfd/ns32k.h \
	../../../binutils-2.24/bfd/ns32knetbsd.c \
	../../../binutils-2.24/bfd/oasys.c \
	../../../binutils-2.24/bfd/opncls.c \
	../../../binutils-2.24/bfd/osf-core.c \
	../../../binutils-2.24/bfd/pc532-mach.c \
	../../../binutils-2.24/bfd/pdp11.c \
	../../../binutils-2.24/bfd/pe-arm-wince.c \
	../../../binutils-2.24/bfd/pe-arm.c \
	../../../binutils-2.24/bfd/pe-i386.c \
	../../../binutils-2.24/bfd/pe-mcore.c \
	../../../binutils-2.24/bfd/pe-mips.c \
	../../../binutils-2.24/bfd/pe-ppc.c \
	../../../binutils-2.24/bfd/pe-sh.c \
	../../../binutils-2.24/bfd/pe-x86_64.c \
	../../../binutils-2.24/bfd/pef-traceback.h \
	../../../binutils-2.24/bfd/pef.c \
	../../../binutils-2.24/bfd/pef.h \
	../../../binutils-2.24/bfd/pei-arm-wince.c \
	../../../binutils-2.24/bfd/pei-arm.c \
	../../../binutils-2.24/bfd/pei-i386.c \
	../../../binutils-2.24/bfd/pei-ia64.c \
	../../../binutils-2.24/bfd/pei-mcore.c \
	../../../binutils-2.24/bfd/pei-mips.c \
	../../../binutils-2.24/bfd/pei-ppc.c \
	../../../binutils-2.24/bfd/pei-sh.c \
	../../../binutils-2.24/bfd/pei-x86_64.c \
	../../../binutils-2.24/bfd/peicode.h \
	../../../binutils-2.24/bfd/plugin.c \
	../../../binutils-2.24/bfd/ppcboot.c \
	../../../binutils-2.24/bfd/reloc.c \
	../../../binutils-2.24/bfd/reloc16.c \
	../../../binutils-2.24/bfd/riscix.c \
	../../../binutils-2.24/bfd/rs6000-core.c \
	../../../binutils-2.24/bfd/sco5-core.c \
	../../../binutils-2.24/bfd/section.c \
	../../../binutils-2.24/bfd/simple.c \
	../../../binutils-2.24/bfd/som.c \
	../../../binutils-2.24/bfd/som.h \
	../../../binutils-2.24/bfd/sparclinux.c \
	../../../binutils-2.24/bfd/sparclynx.c \
	../../../binutils-2.24/bfd/sparcnetbsd.c \
	../../../binutils-2.24/bfd/srec.c \
	../../../binutils-2.24/bfd/stab-syms.c \
	../../../binutils-2.24/bfd/stabs.c \
	../../../binutils-2.24/bfd/sunos.c \
	../../../binutils-2.24/bfd/syms.c \
	../../../binutils-2.24/bfd/targets.c \
	../../../binutils-2.24/bfd/tekhex.c \
	../../../binutils-2.24/bfd/trad-core.c \
	../../../binutils-2.24/bfd/vax1knetbsd.c \
	../../../binutils-2.24/bfd/vaxbsd.c \
	../../../binutils-2.24/bfd/vaxnetbsd.c \
	../../../binutils-2.24/bfd/verilog.c \
	../../../binutils-2.24/bfd/versados.c \
	../../../binutils-2.24/bfd/version.h \
	../../../binutils-2.24/bfd/vms-alpha.c \
	../../../binutils-2.24/bfd/vms-lib.c \
	../../../binutils-2.24/bfd/vms-misc.c \
	../../../binutils-2.24/bfd/vms.h \
	../../../binutils-2.24/bfd/xcofflink.c \
	../../../binutils-2.24/bfd/xsym.c \
	../../../binutils-2.24/bfd/xsym.h \
	../../../binutils-2.24/bfd/xtensa-isa.c \
	../../../binutils-2.24/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfd_stdint.h \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
