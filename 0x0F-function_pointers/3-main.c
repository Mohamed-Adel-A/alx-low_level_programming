#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main fucntion
 * @argc: argc
 * @argv: argv
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int (*f)(int, int);

	printf("argc = %i\n", argc);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = &argv[2][0];
	printf("op : %c\n", *op);
	if (*op != '+' && *op != '-' && *op != '*' &&
		*op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	f = get_op_func(op);
	printf("%i", f(a, b));
	return(0);
}
