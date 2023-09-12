#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the input
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, num;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				num = i * j;
				if (j == 0)
				{
					_putchar('0' + num);
				}
				if (num < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('_');
					_putchar(num + '0');
				else if (num >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0');
					_putchar((num % 10) + '0');
				}
				else if (num >= 10 && num < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			_putchar('\n');
			}
		}
}
