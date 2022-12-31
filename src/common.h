#ifndef _SRC_COMMON_H
#define _SRC_COMMON_H

#include <ctype.h>
#include <errno.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

#define MAGIC_NUMBER ((uint64_t)(0x474F4C4446495348UL))
#define FNAME_LEN 64

#include "errors.h"
#include "ptrlst.h"
#include "memory.h"

#endif /* _SRC_COMMON_H */
