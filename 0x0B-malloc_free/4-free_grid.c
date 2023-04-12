#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - function frees a 2D grid previously created by alloc_grid
* @grid: pointer to a grid
* @height: height of the grid
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
