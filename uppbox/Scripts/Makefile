.PHONY: all umk ide install clean distclean
SHELL = /bin/sh

all:
	+./domake

umk:
	+./domake umk

ide:
	+./domake ide

install:
	+./doinstall --verbose

clean:
	if [ -d "$(UPPOUT)" ] ; then \
		rm -fr "$(UPPOUT)" ; \
	else \
		rm -fr uppsrc/_out ; \
	fi
	rm -f uppsrc/ide.out
	rm -f uppsrc/umk.out

distclean: clean
	rm -f theide
	rm -f umk
	rm -f GCC.bm
	rm -f CLANG.bm
	rm -f uppsrc/Makefile
	rm -f uppsrc/uMakefile
	rm -f uppsrc/build_info.h
