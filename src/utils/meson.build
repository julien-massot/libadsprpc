utils_src = ['adsprpcd.c', 'adsp_default_listener_stub.c']

executable('adsprpcd', utils_src, link_with : libadsp,
	include_directories : incdir, install : true)

executable('cdsprpcd', utils_src, link_with : libcdsp,
	include_directories : incdir, install : true)