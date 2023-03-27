#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: takes int value
 * @b: takes int value
 *
 * Return: int value
 */

void swap_int(int *a, int *b)
{
	int j = *a;

	*a = *b;
	*b = j;
}
