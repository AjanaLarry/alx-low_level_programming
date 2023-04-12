#include <stdio.h>
#include <stdlib.h>

/**
* main - prints minimum number of coins to make change
* @argc: size of argv
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int coins, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	i = 0;
	while (coins > 0)
	{
		if (coins >= 25)
		{
			coins -= 25;
			i += 1;
		}
		else if (coins >= 10)
		{
			coins -= 10;
			i += 1;
		}
		else if (coins >= 5)
		{
			coins -= 5;
			i += 1;
		}
		else if (coins >= 2)
		{
			coins -= 2;
			i += 1;
		}
		else
		{
			coins -= 1;
			i += 1;
		}
	}
	printf("%d\n", i);
	return (0);
}

