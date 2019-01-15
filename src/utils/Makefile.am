bin_PROGRAMS = adsprpcd

adsprpcd_SOURCES = adsprpcd.c adsp_default_listener_stub.c

adsprpcd_CFLAGS = -I$(top_srcdir)/include

adsprpcd_LDADD = $(top_builddir)/src/lib/libadsprpc.la -lpthread -lm -ldl 
