/**
 * rand.h
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef STR_RAND_H
#define STR_RAND_H

#include "common.h"
#include "mem.h"

#define RANDSTR_MIN_LEN 8
#define RANDSTR_CHARSET "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

char *randstr(size_t);

#endif /* STR_RAND_H */
