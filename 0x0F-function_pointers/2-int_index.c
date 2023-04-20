#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: array of integer
* @size: size of array
* @cmp: function pointer
* Return: the index of the first element or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res == 1)
			return (i);
	}
	return (-1);
}
