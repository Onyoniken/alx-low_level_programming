#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of a particular size assigning it char c
 * @size: array size
 * @c: char
 *
 * Description: create array of a particular size and assign char c
 * Return:  a pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)

		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;

	return (str);
}
