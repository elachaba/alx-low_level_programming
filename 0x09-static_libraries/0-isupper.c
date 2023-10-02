#include "main.h"

/**
 * _isupper - Check if c represents an uppercase letter.
 * @c: the integer representing the character
 *
 * Return: 1 for success (c is upper) else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
