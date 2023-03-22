#include "main.h"

/**
 * main - prints Holberton
 *
 * Description: print _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	chat text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
