/*
* Copyright (c) 2017, The Linux Foundation. All rights reserved.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
* this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef LISTENER_H
#define LISTENER_H

#include <pthread.h>
#include <dlfcn.h>
#include "pthread_rw_mutex.h"

#define   MSG(a, b, c)              printf(__FILE_LINE__ ":" c )
#define   MSG_1(a, b, c, d)         printf(__FILE_LINE__ ":" c , d)
#define   MSG_2(a, b, c, d, e)      printf(__FILE_LINE__ ":" c , d, e)
#define   MSG_3(a, b, c, d, e, f)   printf(__FILE_LINE__ ":" c , d, e, f)
#define   MSG_4(a, b, c, d, e, f,g) printf(__FILE_LINE__ ":" c , d, e, f, g)

#define DLW_RTLD_NOW RTLD_NOW
#define dlw_Open dlopen
#define dlw_Sym dlsym
#define dlw_Close dlclose
#define dlw_Error dlerror

#endif
