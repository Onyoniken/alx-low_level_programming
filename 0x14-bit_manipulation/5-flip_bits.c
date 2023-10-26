#include "main.h"

/**
 * flip_bits - main function
 * @n: first parameter
 * @m: second parameter
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, k = 0;
	unsigned long int l;
	unsigned long int a = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		l = a >> j;
		if (l & 1)
			k++;
	}
	return (k);
}
