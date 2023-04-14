#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - a function that concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: unsigned int
* Return: pointer to new string, NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, i;
	unsigned int j;
	char *arr;

	len1 = 0;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1 += 1;
	arr = malloc(len1 + n + 1);

	if (arr == NULL)
		return (NULL);

	while (s1[i])
	{
		arr[i] = s1[i];
		i += 1;
	}

	while (j < n)
	{
		arr[i + j] = s2[j];
		j += 1;
	}
	arr[i + j] = '\0';
	return (p);
}
