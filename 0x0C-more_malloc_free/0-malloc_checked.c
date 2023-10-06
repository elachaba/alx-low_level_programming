#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory to be allocated.
 *
 * Return: a pointer void * to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
