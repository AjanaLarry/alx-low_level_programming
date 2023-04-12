#include <stdio.h>

/**
* main - function that prints program name
* @argc: size of argv
* @argv: array
* Return: 0
**/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
