#include "main.h"

/**
  * _memcpy - main function of the prototype
  *
  * @src: Source parameter 1
  *
  * @dest: Destination parameter 2
  *
  * @n: Function parameter 3
  *
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
	dest[l] = src[l];
	}
	return (dest);
}
