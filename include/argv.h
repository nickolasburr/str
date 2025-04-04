/**
 * argv.h
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef STR_ARGV_H
#define STR_ARGV_H

#include "common.h"
#include "error.h"
#include "utils.h"

#define NUM_OPTS 4
#define OPT_ARGS "hvqe:"

typedef struct {
	char *value;
	char *alias;
	char *desc;
} option_t;

static option_t options[NUM_OPTS];
void usage(void);

#endif /* STR_ARGV_H */
