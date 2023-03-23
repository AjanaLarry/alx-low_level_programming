#include "main.h"

/**
 * _isupper - is a function that checks for uppercase character
 * @c: this takes in a charater
 *
 * Return: 1 for uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
