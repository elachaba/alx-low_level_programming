#include "main.h"


/**
 * get_bit - vslue of the bit at a given index
 * @n: the decimal number
 * @index: the index of the bit to fetch
 *
 * Return: the value of the bit indexed by index, if failed, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
