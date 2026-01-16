// Copyright Microsoft and CHERIoT Contributors.
// SPDX-License-Identifier: MIT

#include <stdint.h>

typedef uint64_t time_t;

struct timespec {
	time_t	tv_sec;		/* seconds */
	long	tv_nsec;	/* and nanoseconds */
};
