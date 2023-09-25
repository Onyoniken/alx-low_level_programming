#include "main.h"

/**
 * _memset()- function to the prototype
 *
 * @b: value that is meant to occupy memory
 *
 * @s: parameter
 *
 * @n: parameter
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	s[k] = b;
	return (s);

}
