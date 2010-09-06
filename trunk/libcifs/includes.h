#ifndef LIBCIFS_INCLUDES_H
#define LIBCIFS_INCLUDES_H

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#ifdef WIN32

#include <windows.h>
#include <winsock.h>

#ifndef MSG_WAITALL
    #define MSG_WAITALL 0
#endif

#else

#include <sys/socket.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <netdb.h>

#endif

#include <sys/types.h>
#include <errno.h>
#include <ctype.h>

#include <unistd.h>
#include <fcntl.h>

#include <sys/time.h>
#include <time.h>

#include <limits.h>

#include "cifs.h"

#include "buffer.h"
#include "struct.h"
#include "transport.h"
#include "proto.h"

#include "transact.h"

#include "smb.h"
#include "trans2.h"
#include "doserr.h"
#include "codepage.h"
#include "debug.h"

#endif /* LIBCIFS_INCLUDES_H */
