#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string to be converted
 *
 * Return: an integer represented in s
 */

int _atoi(char *s)
{
	int i, sign;

	unsigned int res;

	res = 0;
	i = 0;
	sign = 1;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		res += (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

