/**
 * argv.c
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "argv.h"

static option_t options[] = {
	{
		"--help",
		"-h",
		"Show help information.",
	},
	{
		"--version",
		"-v",
		"Show version number.",
	},
	{
		"--quiet",
		"-q",
		"Suppress filename output.",
	},
	{
		"--extension",
		"-e",
		"Set file extension.",
	},
};

/**
 * Print usage information.
 */
void usage (void) {
	int index;

	fprintf(
		stdout,
		"Usage: %s [OPTIONS]\n\nOPTIONS:\n\n",
		EXECNAME
	);

	for (index = 0; index < NUM_OPTS; index += 1) {
		option_t *option = &options[index];

		fprintf(
			stdout,
			"%4s%s, %s: %-24s\n",
			"",
			option->alias,
			option->value,
			option->desc
		);
	}
}
