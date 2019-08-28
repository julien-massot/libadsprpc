dsp_sources = [ 'fastrpc_apps_user.c',
		'remotectl_stub.c',
		'listener.c',
		'adsp_current_process_stub.c',
		'apps_std_skel.c',
		'apps_std_imp.c',
		'apps_mem_imp.c',
		'apps_mem_skel.c',
		'rpcmem.c',
		'apps_remotectl_skel.c',
		'std.c',
		'std_mem.c',
		'std_path.c',
		'std_dtoa.c',
		'std_strlprintf.c',
		'BufBound.c',
		'std_SwapBytes.c',
		'smath.c',
		'atomic.c',
		'cae.c' ]

thread = dependency('threads')
cc = meson.get_compiler('c')
dl = cc.find_library('dl')
m = cc.find_library('m')

libadsp = shared_library('libadsprpc', dsp_sources,
			include_directories : incdir,
			dependencies : [thread, dl, m],
			soversion : '0.0.1',
			install : true,
			c_args : '-D_DEBUG -DARM_ARCH_7 -DUSE_SYSLOG')

libcdsp = shared_library('libcdsprpc', dsp_sources,
			include_directories : incdir,
			dependencies : [thread, dl, m],
			soversion : '0.0.1',
			install : true,
			c_args : '-D_DEBUG -DARM_ARCH_7 -DUSE_SYSLOG')