#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string representing the name
 * @f: a pointer to a function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	if (f)
	{
		f(name);
	}
}
