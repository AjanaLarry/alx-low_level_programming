#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: takes a string
 * 
 * Return: length of string as an int value
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
