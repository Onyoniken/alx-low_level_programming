#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - main function
 * @b: parameter pointer
 *
 * Return: converted number, else 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int k;

	k = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		k <<= 1;
		if (b[j] == '1')
			k += 1;
	}
	return (k);
}
