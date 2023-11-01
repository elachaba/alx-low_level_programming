#include "main.h"
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE -1

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to add at the end of the file
 *
 * Return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (FAILURE);

	for (len = 0; text_content && text_content[len]; len++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(filename, text_content, len);
	if (fd == -1 || w == -1)
		return (FAILURE);

	close(fd);
	return (SUCCESS);
}
