#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * allocate_buff - allocates the necessary memory for the buffer
 * @file: the name of the file to write to
 *
 * Return: the buffer
 */

char *allocate_buff(char *file)
{
	char *buffer = malloc(1024 * sizeof(char));

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_checked - closes a file and checks is it was closed correctly
 * @fd: the index of the file in the file descriptor table
 *
 * Return: void
 */

void close_checked(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program
 * @argv: a list of pointers to the arguments of the program
 *
 * Return: 0 on success
 *
 * Description: If the argument count is incorrect - exit code 97
 * 		If file_from oes not exist or cannot be read - exit code 98
 * 		If file_to cannot be created or written to - exit code 99
 * 		If file_to or file_from cannot be closed - exit 100
 */

int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, buffer, 1024);
	dest = open(argv[2], O_CREATE | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(99);
		}
		w = write(dest, buffer, r);
		if (dest == -1 || w == -1);
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
			freee(buffer);
			exit(99);
		}
		r = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_checked(src);
	close_checked(dest);

	return (0);
}

	
