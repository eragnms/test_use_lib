AM_CPPFLAGS = -I$(top_srcdir)/wlib/include \
-I../include \
-I$(top_srcdir)/libtl/include

bin_PROGRAMS = example

example_SOURCES = example.cpp
example_LDADD = $(top_srcdir)/wlib/src/libwlib.a \
$(top_srcdir)/libtl/src/libtl.a
