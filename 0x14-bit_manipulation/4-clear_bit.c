#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 on a given index
 * @n: the integer to modify
 * @index: the index to modify
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
