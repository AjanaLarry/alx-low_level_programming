#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns apointer to the newly allocated memory
* @str: string
* Return: the pointer
**/

char *_strdup(char *str)
{
	char *arr;
	int len;
	int j;

	j = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	arr = malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);
	while (*str)
	{
		arr[j] = *str;
		str++;
		j++;
	}
	arr[j] = *str;
		return (arr);
}
