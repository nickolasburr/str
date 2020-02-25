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
		"--extension",
		"-e",
		"Set file extension. Defaults to .txt file.",
	},
};

/**
 * Print usage information.
 */
void usage (void) {
	int index;

	fprintf(stdout, "Usage: frn [OPTIONS] [FILE]\n\n");
	fprintf(stdout, "OPTIONS:\n\n");

	for (index = 0; index < NUM_OPTIONS; index += 1) {
		option_t *option = &options[index];

		fprintf(stdout, "%4s%s, %s: %-24s\n", "", option->alias, option->value, option->desc);
	}
}
