#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition fucntion
 * @a: first integer
 * @b: second integer
 * Return: sum (int)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference function
 * @a: first integer
 * @b: second integer
 * Return: difference (int)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first integer
 * @b: second integer
 * Return: multiplication result (int)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 * Return: division result (int)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first integer 
 * @b: second integer
 * Return: remainder (int)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
