# README

This repository exists to help other developers who, like me, needed
valgrind to run on macOS High Sierra but did not wish to install
macports or the version provided via macports/brew did not work for
them on macOS High Sierra.

This repository claims no original work and is based on the original
code for [Valgrind](http://valgrind.org) developed by its awsome team
of [developers](http://valgrind.org/info/developers.html).

The code in this repository differs from the original code for 
valgrind version 3.13.0 ([release](http://valgrind.org/downloads/current.html),
[repository](http://valgrind.org/downloads/repository.html)) in that 
it updates the configuration scripts to include rules for detecting 
and compiling for Apple LLVM Compiler version 9.x and macOS Version
10.13.x, and updates source files to recognize macOS version 10.13.x

The following files have been modified
* config.h
* config.h.in
* configure
* configure.ac
* darwin17.supp
* Makefile.in
* coregrind/fixup_macho_loadcmds.c
* coregrind/m_syswrap/syswrap-amd64-darwin.c
* coregrind/m_syswrap/syswrap-x86-darwin.c


The README for the actual source is available in this repository as
README_VALGRIND.

This port is licensed under the GNU General Public License, version 2 
or later. 
