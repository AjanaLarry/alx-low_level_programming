#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - a function that allocates memory for an array
* @nmemb: number of members
* @size: number of bytes
* Return: pointer to allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
