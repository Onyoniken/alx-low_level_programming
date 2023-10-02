#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees up my 2D array
 * @grid: a 2D grid parameter
 * @height: height parameter of my grid
 * Description: frees up my memory
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);

	}
	free(grid);
}
