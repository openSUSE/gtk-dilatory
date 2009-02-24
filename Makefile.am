moduledir = $(libdir)/gtk-2.0/modules

module_LTLIBRARIES = libdilatory.la

libdilatory_la_SOURCES = dilatory.c
libdilatory_la_CFLAGS = @GTK_CFLAGS@
libdilatory_la_LIBS = @GTK_LIBS@
libdilatory_la_LDFLAGS = -module -avoid-version

ACLOCAL_AMFLAGS = -I m4

dist_bin_SCRIPTS = gtk-dilatory
