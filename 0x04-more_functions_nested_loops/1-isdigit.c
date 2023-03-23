#include "main.h"

/**
 * _isdigit - is a function that checks for a digit
 * @c: this takes in a charater
 *
 * Return: 1 for a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
