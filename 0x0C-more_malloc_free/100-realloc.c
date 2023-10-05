#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory employing malloc and free tools
 * @ptr: pointer to the memory allocated by malloc
 * @old_size: size of the old memory
 * @new_size: size of new memory
 *
 * Return: pointer to the new memory
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)

	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)

		return (malloc(new_size));
	a = malloc(new_size);

	if (!a)
		return (NULL);
	b = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			a[k] = b[k];
	}
	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			a[k] = b[k];
	}
	free(ptr);
	return (a);

}
