#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int a, b, result;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	res = get_op_func(argv[2]);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = res(a, b);

	printf("%d\n", result);

	return (0);
}
