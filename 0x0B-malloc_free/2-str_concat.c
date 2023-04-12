#include <stdlib.h>
#include "main.h"

/**
* str_concat - a function that concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to new string, NULL if it fails
**/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *arr;

	len1 = 0;
	len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	arr = malloc((len1 + len2) * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		arr[i] = s1[i];
	for (i = 0; i < len2; i++)
		arr[i + len1] = s2[i];

	return (arr);
}
