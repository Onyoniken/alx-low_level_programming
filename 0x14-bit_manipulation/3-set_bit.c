#include "main.h"

/**
 * set_bit - main function
 * @n: parameter 1
 * @index: parameter 2
 *
 * Return: 1 on success and 1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;
	return (1);
}
