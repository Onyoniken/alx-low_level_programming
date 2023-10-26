#include "main.h"
#include <stdio.h>
/**
 * clear_bit - main function
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
