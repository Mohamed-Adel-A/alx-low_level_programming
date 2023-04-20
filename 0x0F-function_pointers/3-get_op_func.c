#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform
 * @s: the operator passed as argument to the program
 *
 * Return: returns a pointer to the function
 * that corresponds to the operator given as a parameter.
 */
int (*get_op_func(char *s))
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
	while (i == 5 || s[0] != *ops[i].op)
	{
		i++;
	}

	return (ops[i].f);
}
