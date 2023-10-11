#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the function correspondant to the operation
 * that the user demanded.
 * @s: the operator passed to the program.
 *
 * Return: a pointer to the function to execute the operation.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
