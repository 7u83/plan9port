#if defined(__FreeBSD__) && !defined(__APPLE__)
	#include "fuse_kernel_freebsd.h"
#else
	#include "fuse_kernel_default.h"
#endif

