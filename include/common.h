/**
 * common.h
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */
#ifndef STR_COMMON_H
#define STR_COMMON_H

#include <ctype.h>
#include <errno.h>
#include <getopt.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#ifdef __APPLE__
#include <limits.h>
#else
#include <linux/limits.h>
#endif

#define is_null(ptr) ((ptr) == ((void *) 0))
#define NULL_BYTE 1

#define EXECNAME "str"
#define EXECVERS "1.0.0"

#endif /* STR_COMMON_H */
