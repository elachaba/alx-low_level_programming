#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concateates two strings
 * @s1: a pointer to the first char of the first string
 * @s2: a pointer to the second char of the second string
 *
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	unsigned int i, j, size1, size2;


	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1]; size1++)
		;
	for (size2 = 0; s2[size2]; size2++)
		;

	concat = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!concat)
	{
		return (NULL);
	}

	for (i = 0 ; i < size1; i++)
	{

		concat[i] = s1[i];
	}

	for (j = 0; j <= size2; j++)
	{
		concat[i + j] = s2[j];
	}

	return (concat);
}
