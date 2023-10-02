#include "main.h"

/**
 * _isdigit - Check for a digit 0 through 9
 * @c: the integer holding the character
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
