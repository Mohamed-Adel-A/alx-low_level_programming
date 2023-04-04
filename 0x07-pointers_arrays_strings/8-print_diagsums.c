#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the matrix
 * @size: matrix size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 = sum1 + a[i][i];
		sum2 = sum2 + a[size - i - 1][i];
	}
	printf("%i, %i\n", sum1, sum2);
}
