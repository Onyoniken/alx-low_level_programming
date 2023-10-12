#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - main function that returns sum of parameters
 * @n: no of parameters
 * @...: Param 2
 *
 * Return: If n == 0 - 0.
 * Otherwise - sum of all parameters.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int k, sum = 0;

	va_start(a, n);

	for (k = 0; k < n; k++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
