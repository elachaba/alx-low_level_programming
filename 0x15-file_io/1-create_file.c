#include "main.h"
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE -1

/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on Success, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (FAILURE);

	for (len = 0; text_content && text_content[len]; len++)
		;

	fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
i
	if (fd == -1 || w == -1)
		return (FAILURE);
	close(fd);
	return (SUCCESS);
}
