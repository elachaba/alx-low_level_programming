#include "main.h"


/**
 * binary_to_uint - converts a binary number into an usigned int
 * @b: a poinrer to the string of bits
 * 
 * Return: 0 if there's a chracter in b that is not 0 or 1 or if b is NULL
 * else the corresponding int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (!b)
		return (res);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		res = res * 2 + (b[i] - '0');
	}

	return (res);
}
