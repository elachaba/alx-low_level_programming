#include "main.h"

/**
 * more_numbers - prints numbers 0 through 14 10 times to stdout
 */

void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
	}
}
