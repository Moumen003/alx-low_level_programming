#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = fopen(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters);
	ssize_t bytes;

	if (fp == -1)
		return (0);
	if (!filename || !letters)
		return (0);

	bytes = read(fp, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);
	close(fp);
	return (bytes);
}
