#include "main.h"

/**
 * _pow - main function
 * @base: parameter 1
 * @power: parameter 2
 *
 * Return: (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int a;
	unsigned int b;

	a = 1;
	for (b = 1; b <= power; b++)
		a *= base;
	return (a);
}

/**
 * print_binary - main function
 * @n: parameter
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int j, k;
	char l;

	l = 0;
	j = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (j != 0)
	{
		k = n & j;
		if (k == j)
		{
			l = 1;
			_putchar('1');
		}
		else if (l == 1 || j == 1)
		{
			_putchar('0');
		}
		j >>= 1;
	}
}
