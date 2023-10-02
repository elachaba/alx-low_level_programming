#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring, it finds its first occurence
 * @haystack: the string where to search
 * @needle: the string to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return (NULL);
}

