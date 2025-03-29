/**
 * main.c
 *
 * Copyright (C) 2020 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "main.h"

int main (int argc, char **argv) {
	int error, index, quiet, value;
	size_t length;
	ssize_t read;
	FILE *file = NULL;
	char *extn = NULL,
	     *line = NULL,
		 *base = NULL,
		 *name = NULL;

	static struct option long_opts[] = {
		{ "help", no_argument, 0, 'h' },
		{ "version", no_argument, 0, 'v' },
		{ "quiet", no_argument, 0, 'q' },
		{ "extension", required_argument, 0, 'e' }
	};

	index = 0;
	quiet = 0;

	while ((value = getopt_long(argc, argv, OPT_ARGS, long_opts, &index)) != -1) {
		switch (value) {
			case 'h':
				usage();
				exit(EXIT_SUCCESS);
			case 'v':
				fprintf(stdout, "%s\n", EXECVERS);
				exit(EXIT_SUCCESS);
			case 'q':
				quiet = 1;
				break;
			case 'e':
				if (is_null(optarg)) {
					fprintf(stdout, "%s: Missing file extension.\n", EXECNAME);
					goto on_error;
				}

				extn = optarg;
				break;
			case '?':
				usage();
				exit(EXIT_FAILURE);
			default:
				usage();
				exit(EXIT_FAILURE);
		}
	}

	if (is_null(extn)) {
		fprintf(stdout, "%s: Missing file extension.\n", EXECNAME);
		goto on_error;
	}

	srand(time(NULL));

	base = concat(randstr(RANDSTR_MIN_LEN), ".");
	name = concat(base, extn);
	file = get_file(&error, name, "w");

	if (error) {
		fprintf(stderr, "Unable to open file for writing.\n");
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &length, stdin)) != -1) {
		fwrite(line, read, 1, file);
	}

	if (!quiet) {
		fprintf(stdout, "%s\n", name);
	}

	fclose(file);
	return EXIT_SUCCESS;

on_error:
	return EXIT_FAILURE;
}
