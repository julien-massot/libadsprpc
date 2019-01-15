/*
 * SPDX-License-Identifier: GPL-2.0
 * Copyright (c) 2011-2019, The Linux Foundation. All rights reserved.
 * Copyright (c) 2019, Linaro Limited
 */

#include <stdio.h>
#include <poll.h>
#include <unistd.h>
#include <sys/eventfd.h>
#include "adsp_default_listener.h"
#include "remote.h"

int main(int argc, const char **argv)
{
	struct pollfd pfd;
	remote_handle rh;
	eventfd_t event = 0;

	remote_handle_open(ITRANSPORT_PREFIX "attachguestos", &rh);
	adsp_default_listener_register();
	remote_handle_open(ITRANSPORT_PREFIX "geteventfd", &pfd.fd);

	pfd.events = POLLIN;
	pfd.revents = 0;
	while (1) {
		poll(&pfd, 1, -1);

		eventfd_read(pfd.fd, &event);
		if (event)
			break;
	}

	return 0;
}
