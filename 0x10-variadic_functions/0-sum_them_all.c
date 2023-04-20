#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - function that sums 
* up all parameters
* @n: number of parameters
* Return: sum (int)
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list parm;
	unsigned int i;
       	int sum;

	if (n == 0)
		return (0);

	va_start(parm, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(parm, int);

	va_end (parm);
	return (sum);
}
