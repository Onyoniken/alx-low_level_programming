#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - main function
 * @array: array
 * @size: dimension of array
 * @action: pointer to print parameter
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}

}
