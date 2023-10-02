#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to make a grid
 * @width: width parameter
 * @height: height parameter
 * Return: pointer to 2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **aaa;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	aaa = malloc(sizeof(int *) * height);

	if (aaa == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		aaa[j] = malloc(sizeof(int) * width);
		if (aaa[j] == NULL)

		{
			for (; j >= 0; j--)
				free(aaa[j]);

			free(aaa);
			return (NULL);

		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		aaa[j][k] = 0;
	}

	return (aaa);
}
