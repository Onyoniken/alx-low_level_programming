#include "main.h"

/**
 * _memcpy() - function prototype
 *
 * @src: source
 *
 * @dest: destination
 *
 * @n: function param
 *
 * return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
