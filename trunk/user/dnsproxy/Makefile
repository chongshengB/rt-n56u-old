# Top level Makefile, the real shit is at src/Makefile
THISDIR = $(shell pwd)
SRC_NAME=src
all:
	$(MAKE) -j$(HOST_NCPU) -C $(SRC_NAME)

clean:
	cd src && $(MAKE) $@

install:
	cd src && $(MAKE) $@

uninstall:
	cd src && $(MAKE) $@

.PHONY: all clean install uninstall


romfs:
	$(ROMFSINST) -p +x $(THISDIR)/src/dnsproxy /usr/bin/dnsproxy