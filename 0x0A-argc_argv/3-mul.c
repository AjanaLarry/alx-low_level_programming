#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print product of two numbers
 * @argc: size of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
