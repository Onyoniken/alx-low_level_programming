#include "main.h"
#include <stdlib.h>

/**
 * *_memset - function that allocates memory with certain number of bytes
 * @s: memory to be occupied
 * @a: character that is copied
 * @b: frequency of copying
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char a, unsigned int b)
{
	unsigned int k;

	for (k = 0; k < b; k++)
	{
		s[k] = a;
	}
	return (s);
}

/**
 * *_calloc - memory allocator to an array
 * @nmemb: elements of an array
 * @size: element size
 *
 * Return: pointer to a memory that is allocated
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)

	return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
