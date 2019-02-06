adsprpcdir = $(libdir)

adsprpc_LTLIBRARIES = libadsprpc.la
libadsprpc_la_SOURCES = 	fastrpc_apps_user.c \
		remotectl_stub.c \
		listener.c \
		adsp_current_process_stub.c \
		apps_std_skel.c \
		apps_std_imp.c \
		apps_mem_imp.c \
		apps_mem_skel.c \
		rpcmem.c \
		apps_remotectl_skel.c \
		std.c \
		std_mem.c \
		std_path.c \
		std_dtoa.c \
		std_strlprintf.c \
		BufBound.c \
		std_SwapBytes.c \
		smath.c \
		atomic.c \
		cae.c

libadsprpc_la_LDFLAGS = -ldl -lpthread -lm -shared
libadsprpc_la_CFLAGS = -I$(top_srcdir)/include -O3 -Iinc -fPIC -fno-short-enums -D_DEBUG -DARM_ARCH_7 -DUSE_SYSLOG

cdsprpcdir = $(libdir)

cdsprpc_LTLIBRARIES = libcdsprpc.la
libcdsprpc_la_SOURCES = 	fastrpc_apps_user.c \
		remotectl_stub.c \
		listener.c \
		adsp_current_process_stub.c \
		apps_std_skel.c \
		apps_std_imp.c \
		apps_mem_imp.c \
		apps_mem_skel.c \
		rpcmem.c \
		apps_remotectl_skel.c \
		std.c \
		std_mem.c \
		std_path.c \
		std_dtoa.c \
		std_strlprintf.c \
		BufBound.c \
		std_SwapBytes.c \
		smath.c \
		atomic.c \
		cae.c

libcdsprpc_la_LDFLAGS = -ldl -lpthread -lm -shared
libcdsprpc_la_CFLAGS = -I$(top_srcdir)/include -O3 -Iinc -fPIC -fno-short-enums -D_DEBUG -DARM_ARCH_7 -DUSE_SYSLOG -DCDSP_DOMAIN
