#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long int a, b, i, m;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 1 ; i <= 48 ; i++)
	{
		m = a + b;
		a = b;
		b = m;
		printf(", %ld", m);
	}
	printf("\n");
	return (0);
}
