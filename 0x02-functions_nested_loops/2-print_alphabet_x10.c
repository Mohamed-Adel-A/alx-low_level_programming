#include "main.h"

/**
 * print_alphabet_10x - print 10 time the alphabet
 *
 * Return: void
 */

void print_alphabet_10x(void)
{
	char c;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
	}
}