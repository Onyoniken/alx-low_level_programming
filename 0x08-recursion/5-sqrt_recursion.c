#include "main.h"

int actual_sqrt_recursion(int n, int k);
/**
 * _sqrt_recursion - main function that returns square qoot of a number
 * @n: number whose square root is determined
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));

}

/**
 * actual_sqrt_recursion - recurses to find natural square root of a number
 * @n: number to calculate square root
 * @k: iterating factor
 *
 * Return: square root
 */
int actual_sqrt_recursion(int n, int k)

{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (actual_sqrt_recursion(n, k + 1));
}
