/**
 * rand.c
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 * Adapted from https://tinyurl.com/vy8ygj2
 */
#include "rand.h"

char *randstr(size_t length) {
	size_t index, key;
	char *buf = NULL;

	if (length < RANDSTR_MIN_LEN) {
		length = RANDSTR_MIN_LEN;
	}

	buf = ALLOC(length + NULL_BYTE);

	if (!is_null(buf)) {
		for (index = 0; index < length; index += 1) {
			key = rand() % (int)(sizeof(RANDSTR_CHARSET) - NULL_BYTE);
			buf[index] = RANDSTR_CHARSET[key];
		}
		buf[length] = '\0';
	}

	return buf;
}
