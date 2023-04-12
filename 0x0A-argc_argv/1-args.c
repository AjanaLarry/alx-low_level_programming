#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: size of arguments
 * @argv: array 
 * Return: success as (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int args = argc - 1;
	
	if (argc > 0)
		printf("%d\n", args);
	return (0);
}
