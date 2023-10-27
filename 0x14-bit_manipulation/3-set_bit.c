#include "main.h"
#include <stdlib.h>

/**
 * set_bit: sets the value of a bit to 1 on a given index
 * @n: the decimal to manipulate
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
