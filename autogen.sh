#!/bin/sh
# Run this to generate all initial makefiles, etc.
# Work-around missing INSTALL file:
automake --add-missing 2>/dev/null || :
aclocal
libtoolize
automake --add-missing
autoconf
