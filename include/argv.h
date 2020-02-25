/**
 * argv.h
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */
#ifndef FRN_ARGV_H
#define FRN_ARGV_H

#include "common.h"
#include "error.h"
#include "utils.h"

#define NUM_OPTIONS 3
#define OPT_DELIMIT "--"

typedef struct {
	char *value;
	char *alias;
	char *desc;
} option_t;

static option_t options[NUM_OPTIONS];
void usage(void);

#endif /* FRN_ARGV_H */
