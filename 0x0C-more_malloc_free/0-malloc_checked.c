#include <stdlib.h>
#include "main.h"

/**
 **malloc_checked - a function that allocates memory using malloc
 * @b: a parameter specifying number of bytes to allocate the memory
 *
 * Return: returns pointer to the memory allocated
 *
 */
void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);


	return (ptr);
}
