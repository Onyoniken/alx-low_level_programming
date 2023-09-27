#include "main.h"
/**
 * factorial - main function that returns factorial of a number
 * @n: number of factorials
 *
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
