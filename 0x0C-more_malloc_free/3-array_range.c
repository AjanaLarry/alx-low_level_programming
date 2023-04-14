#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - a function that creates an array of integers
* @min: minimum int
* @max: maximum int
* Return: pointer to allocated memory
**/

int *array_range(int min, int max)
{
	int *arr;
       	int diff, i;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
