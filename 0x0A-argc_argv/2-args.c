#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: size of arguments
 * @argv: array
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
