#include "main.h"
#include <stdlib.h>

/**
 * *array_range - formulates array of intergers
 * @min: minimun amount of values stored
 * @max: maximum amount of values stored
 *
 * Return: pointer to array
 *
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	ptr = malloc(sizeof(int) * k);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}
