AC_PREREQ([2.63])
AC_INIT([gtk-dilatory], [0.2], [sbrabec@suse.cz])
AM_INIT_AUTOMAKE([1.10 foreign no-dist-gzip dist-bzip2])
AC_CONFIG_SRCDIR([dilatory.c])
AC_CONFIG_MACRO_DIR([m4])
AM_DISABLE_STATIC

AC_PROG_CC
AC_PROG_LIBTOOL

AC_ARG_WITH([gtk2], [build for GTK+ 2 even if GTK+ 3 is available],
	[AM_PATH_GTK_2_0([], [GTK=gtk-2.0])],
	[AM_PATH_GTK_3_0([], [GTK=gtk-3.0],
		[AM_PATH_GTK_2_0([], [GTK=gtk-2.0])])
	]
)
AC_SUBST([gtk], [$GTK])

AC_CHECK_HEADERS([unistd.h])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
