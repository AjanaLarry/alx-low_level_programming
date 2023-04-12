#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - function that returns a pointer to 2D array of int
* @width: number of columns
* @height: number of rows
* Return: return a pointer to the array otherwise return NULL
*/

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
