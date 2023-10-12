#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers passed in the parameters
 * @separator: the separator to put between the numbers
 * @n: th number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (!separator || i == 0)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");
}

