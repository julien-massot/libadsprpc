bin_PROGRAMS = adsprpcd cdsprpcd

adsprpcd_SOURCES = adsprpcd.c adsp_default_listener_stub.c

adsprpcd_CFLAGS = -I$(top_srcdir)/include

adsprpcd_LDADD = $(top_builddir)/src/lib/libadsprpc.la -lpthread -lm -ldl 

cdsprpcd_SOURCES = $(adsprpcd_SOURCES)

cdsprpcd_CFLAGS = $(adsprpcd_CFLAGS)

cdsprpcd_LDADD = $(top_builddir)/src/lib/libcdsprpc.la -lpthread -lm -ldl
