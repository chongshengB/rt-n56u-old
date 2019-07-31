#
# OpenSSL/ssl/Makefile
#

DIR=	ssl
TOP=	..
CC=	cc
INCLUDES= -I../crypto -I$(TOP) -I../include $(KRB5_INCLUDES)
CFLAG=-g
MAKEFILE=	Makefile
AR=		ar r
# KRB5 stuff
KRB5_INCLUDES=

CFLAGS= $(INCLUDES) $(CFLAG)

GENERAL=Makefile README ssl-lib.com install.com
TEST=ssltest.c heartbeat_test.c clienthellotest.c sslv2conftest.c dtlstest.c \
	bad_dtls_test.c fatalerrtest.c
APPS=

LIB=$(TOP)/libssl.a
SHARED_LIB= libssl$(SHLIB_EXT)
LIBSRC=	\
	s2_meth.c   s2_srvr.c s2_clnt.c  s2_lib.c  s2_enc.c s2_pkt.c \
	s3_meth.c   s3_srvr.c s3_clnt.c  s3_lib.c  s3_enc.c s3_pkt.c s3_both.c s3_cbc.c \
	s23_meth.c s23_srvr.c s23_clnt.c s23_lib.c          s23_pkt.c \
	t1_meth.c   t1_srvr.c t1_clnt.c  t1_lib.c  t1_enc.c t1_ext.c \
	d1_meth.c   d1_srvr.c d1_clnt.c  d1_lib.c  d1_pkt.c \
	d1_both.c d1_srtp.c \
	ssl_lib.c ssl_err2.c ssl_cert.c ssl_sess.c \
	ssl_ciph.c ssl_stat.c ssl_rsa.c \
	ssl_asn1.c ssl_txt.c ssl_algs.c ssl_conf.c \
	bio_ssl.c ssl_err.c kssl.c t1_reneg.c tls_srp.c t1_trce.c ssl_utst.c
LIBOBJ= \
	s2_meth.o  s2_srvr.o  s2_clnt.o  s2_lib.o  s2_enc.o s2_pkt.o \
	s3_meth.o  s3_srvr.o  s3_clnt.o  s3_lib.o  s3_enc.o s3_pkt.o s3_both.o s3_cbc.o \
	s23_meth.o s23_srvr.o s23_clnt.o s23_lib.o          s23_pkt.o \
	t1_meth.o   t1_srvr.o t1_clnt.o  t1_lib.o  t1_enc.o t1_ext.o \
	d1_meth.o   d1_srvr.o d1_clnt.o  d1_lib.o  d1_pkt.o \
	d1_both.o d1_srtp.o\
	ssl_lib.o ssl_err2.o ssl_cert.o ssl_sess.o \
	ssl_ciph.o ssl_stat.o ssl_rsa.o \
	ssl_asn1.o ssl_txt.o ssl_algs.o ssl_conf.o \
	bio_ssl.o ssl_err.o kssl.o t1_reneg.o tls_srp.o t1_trce.o ssl_utst.o

SRC= $(LIBSRC)

EXHEADER= ssl.h ssl2.h ssl3.h ssl23.h tls1.h dtls1.h kssl.h srtp.h
HEADER=	$(EXHEADER) ssl_locl.h kssl_lcl.h

ALL=    $(GENERAL) $(SRC) $(HEADER)

top:
	(cd ..; $(MAKE) DIRS=$(DIR) all)

all:	shared

lib:	$(LIBOBJ)
	$(AR) $(LIB) $(LIBOBJ)
	$(RANLIB) $(LIB) || echo Never mind.
	@touch lib

shared: lib
	if [ -n "$(SHARED_LIBS)" ]; then \
		(cd ..; $(MAKE) $(SHARED_LIB)); \
	fi

files:
	$(PERL) $(TOP)/util/files.pl Makefile >> $(TOP)/MINFO

links:
	@$(PERL) $(TOP)/util/mklink.pl ../include/openssl $(EXHEADER)
	@$(PERL) $(TOP)/util/mklink.pl ../test $(TEST)
	@$(PERL) $(TOP)/util/mklink.pl ../apps $(APPS)

install:
	@[ -n "$(INSTALLTOP)" ] # should be set by top Makefile...
	@headerlist="$(EXHEADER)"; for i in $$headerlist ; \
	do  \
	(cp $$i $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i; \
	chmod 644 $(INSTALL_PREFIX)$(INSTALLTOP)/include/openssl/$$i ); \
	done;

tags:
	ctags $(SRC)

tests:

lint:
	lint -DLINT $(INCLUDES) $(SRC)>fluff

update: local_depend
	@if [ -z "$(THIS)" ]; then $(MAKE) -f $(TOP)/Makefile reflect THIS=$@; fi

depend: local_depend
	@if [ -z "$(THIS)" ]; then $(MAKE) -f $(TOP)/Makefile reflect THIS=$@; fi
local_depend:
	@[ -z "$(THIS)" ] || $(MAKEDEPEND) -- $(CFLAG) $(INCLUDES) $(DEPFLAG) -- $(PROGS) $(LIBSRC)

dclean:
	$(PERL) -pe 'if (/^# DO NOT DELETE THIS LINE/) {print; exit(0);}' $(MAKEFILE) >Makefile.new
	mv -f Makefile.new $(MAKEFILE)

clean:
	rm -f *.o *.obj lib tags core .pure .nfs* *.old *.bak fluff

# DO NOT DELETE THIS LINE -- make depend depends on it.

bio_ssl.o: bio_ssl.c
d1_both.o: ../e_os.h d1_both.c ssl_locl.h
d1_clnt.o: ../e_os.h d1_clnt.c kssl_lcl.h ssl_locl.h
d1_lib.o: ../e_os.h d1_lib.c ssl_locl.h
d1_meth.o: ../e_os.h d1_meth.c ssl_locl.h
d1_pkt.o: ../e_os.h d1_pkt.c ssl_locl.h
d1_srtp.o: ../e_os.h d1_srtp.c srtp.h ssl_locl.h
d1_srvr.o: ../e_os.h d1_srvr.c ssl_locl.h
kssl.o: ../crypto/o_time.h kssl.c kssl_lcl.h
s23_clnt.o: ../e_os.h s23_clnt.c ssl_locl.h
s23_lib.o: ../e_os.h s23_lib.c ssl_locl.h
s23_meth.o: ../e_os.h s23_meth.c ssl_locl.h
s23_pkt.o: ../e_os.h s23_pkt.c ssl_locl.h
s23_srvr.o: ../e_os.h s23_srvr.c ssl_locl.h
s2_clnt.o: ../e_os.h s2_clnt.c ssl_locl.h
s2_enc.o: ../e_os.h s2_enc.c ssl_locl.h
s2_lib.o: ../e_os.h s2_lib.c ssl_locl.h
s2_meth.o: ../e_os.h s2_meth.c ssl_locl.h
s2_pkt.o: ../e_os.h s2_pkt.c ssl_locl.h
s2_srvr.o: ../e_os.h s2_srvr.c ssl_locl.h
s3_both.o: ../e_os.h s3_both.c ssl_locl.h
s3_cbc.o: ../crypto/constant_time_locl.h ../e_os.h s3_cbc.c ssl_locl.h
s3_clnt.o: ../e_os.h kssl_lcl.h s3_clnt.c ssl_locl.h
s3_enc.o: ../e_os.h s3_enc.c ssl_locl.h
s3_lib.o: ../e_os.h kssl_lcl.h s3_lib.c ssl_locl.h
s3_meth.o: ../e_os.h s3_meth.c ssl_locl.h
s3_pkt.o: ../e_os.h s3_pkt.c ssl_locl.h
s3_srvr.o: ../crypto/constant_time_locl.h ../e_os.h kssl_lcl.h s3_srvr.c
s3_srvr.o: ssl_locl.h
ssl_algs.o: ../e_os.h ssl_algs.c ssl_locl.h
ssl_asn1.o: ../e_os.h ssl_asn1.c ssl_locl.h
ssl_cert.o: ../crypto/o_dir.h ../e_os.h ssl_cert.c ssl_locl.h
ssl_ciph.o: ../e_os.h ssl_ciph.c ssl_locl.h
ssl_conf.o: ../e_os.h ssl_conf.c ssl_locl.h
ssl_err.o: ssl_err.c
ssl_err2.o: ssl_err2.c
ssl_lib.o: ../e_os.h kssl_lcl.h ssl_lib.c ssl_locl.h
ssl_rsa.o: ../e_os.h ssl_locl.h ssl_rsa.c
ssl_sess.o: ../e_os.h ssl_locl.h ssl_sess.c
ssl_stat.o: ../e_os.h ssl_locl.h ssl_stat.c
ssl_txt.o: ../e_os.h ssl_locl.h ssl_txt.c
ssl_utst.o: ../e_os.h ssl_locl.h ssl_utst.c
t1_clnt.o: ../e_os.h ssl_locl.h t1_clnt.c
t1_enc.o: ../e_os.h ssl_locl.h t1_enc.c
t1_ext.o: ../e_os.h ssl_locl.h t1_ext.c
t1_lib.o: ../e_os.h ssl_locl.h t1_lib.c
t1_meth.o: ../e_os.h ssl_locl.h t1_meth.c
t1_reneg.o: ../e_os.h ssl_locl.h t1_reneg.c
t1_srvr.o: ../e_os.h ssl_locl.h t1_srvr.c
t1_trce.o: ../e_os.h ssl_locl.h t1_trce.c
tls_srp.o: ../e_os.h ssl_locl.h tls_srp.c
