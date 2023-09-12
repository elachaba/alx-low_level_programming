#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i;

	int j;

	int digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			digit = i * j;
			if (j == 0)
			{
				_putchar(digit + '0');
			}
			if (digit < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(digit + '0');
			}
			else if (digit >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((digit / 10) + '0');
				_putchar((digit % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
