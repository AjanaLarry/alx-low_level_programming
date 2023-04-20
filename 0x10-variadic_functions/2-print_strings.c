#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function that prints a string
* @separator: string separator
* @n: numbers of arguments
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	va_end(args);
}
