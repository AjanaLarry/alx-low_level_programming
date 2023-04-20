#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - calls a function given as
* a parameter on array element
* @array: integer array
* @size: size of array
* @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
