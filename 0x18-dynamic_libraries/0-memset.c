#include "main.h"
/**
 * _memset - block of memory to be filled
 * @s: starting address to fill memory
 * @b: value desired
 * @n: bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
