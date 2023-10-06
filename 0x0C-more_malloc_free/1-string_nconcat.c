#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: a pointer to a the memory space containing
 * the concatenation of s1 and the first n bytes of
 * s2. If the allocation is failed, returns NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int i, j, size1, size2;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
		;
	for (size2 = 0; s2[size2]; size2++)
		;

	if (n < size2)
		size2 = n;

	concat = malloc(sizeof(char) * (size1 + size2));
	if (!concat)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		concat[size1 + j] = s2[j];
	}

	concat[size1 + j] = '\0';

	return (concat);
}
