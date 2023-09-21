#include "main.h"
/**
 * _strncpy - copy a string (the main function of the code)
 * @dest: input value, a function parameter
 * @src: input value which is the function parameter
 * @n: input value, a function parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
