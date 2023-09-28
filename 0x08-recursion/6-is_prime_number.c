#include "main.h"

int isPrime(int n, int checker);

/**
 * is_prime_number - checks if an integer is prime or not
 * @n: the integer to be checked
 *
 * Return: 1 if the integer @n is a prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	return (isPrime(n, 2));
}

/**
 * isPrime - checks if a number is prime recursively
 * @n: the integer to check
 * @checker: a value to check if it devides n
 *
 * Return: 1 if n is prime, else 0
 */

int isPrime(int n, int checker)
{
	if (n % checker == 0)
	{
		return (0);
	}
	if (checker * checker > n)
	{
		return (1);
	}
	return (isPrime(n, checker + 1));
}
