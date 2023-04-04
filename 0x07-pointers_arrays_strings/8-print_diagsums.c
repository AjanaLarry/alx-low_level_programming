#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int s0 = 0;
	int s1 = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		s0 += a[i];
	}
	for (j = size - 1; j < size * size - (size - 1); j += (size - 1))
	{
		s1 += a[j];
	}
	printf("%d, %d\n", s0, s1);
}
