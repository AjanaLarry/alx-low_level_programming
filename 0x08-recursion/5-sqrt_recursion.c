#include "main.h"

/**
* _sqrt_recursion - function returns natural square root of a number
* @n: integer
* Return: integer a square root or -1 if no square root
**/

int _sqrt_recursion(int n)
{
return (_nsqurt(n, 1));

}

/**
* natural_square - a function that help to find natural_square
* @x: integer
* @y: integer
* Return: square root or -1
**/

int _nsqurt(int x, int y)
{
	int s = y * y;

	if (s > x)
		return (-1);
	if (s == x)
		return (y);
	return (_nsqurt(x, y + 1));
}
