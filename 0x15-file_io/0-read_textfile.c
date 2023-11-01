#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and pruints it to the POSIX stdout
 *
 * @filename: the text file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (r == -1 || w == -1)
		return (0);
	close(fd);

	return (w);
}

