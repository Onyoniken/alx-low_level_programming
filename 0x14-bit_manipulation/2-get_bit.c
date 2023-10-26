#include "main.h"

/**
 * get_bit - main function
 * @n: parameter 1
 * @index: parameter 2
 *
 * Return: bit value, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j, k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	k = n & j;
	if (k == j)
		return (1);
	return (0);
}
