#include "function_pointers.h"
/**
 * int_index - main function
 * @array: array
 * @size: dimension of array parameter
 * @cmp: pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);

}
