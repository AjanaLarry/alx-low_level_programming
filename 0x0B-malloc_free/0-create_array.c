#include <stdlib.h>
#include "main.h"

/**
* create_array - a function that creates an array of char
* @size: size of array
* @c: char
* Return: a char size
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(sizeof(char) * size);
	if (j == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		j[i] = c;
	return (j);
}
