/**
 * rand.h
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */
#ifndef FRN_RAND_H
#define FRN_RAND_H

#include "common.h"
#include "mem.h"

#define RANDSTR_MIN_LEN 8
#define RANDSTR_CHARSET "0123456789abcdefghijklmnopqrstuvwxyz"

char *randstr(size_t);

#endif /* FRN_RAND_H */
