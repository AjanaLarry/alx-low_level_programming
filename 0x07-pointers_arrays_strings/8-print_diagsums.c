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
	int asum = 0;
	int bsum = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		asum += a[i];
	}
	for (j = size - 1; j < size * size - (size - 1); j += (size - 1))
	{
		bsum += a[j];
	}
	printf("%d, %d\n", asum, bsum);
}
