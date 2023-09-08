#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry of the program
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int last_digit;
	
	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = (-1) * last_digit;
	}
	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else if (last_digit < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
