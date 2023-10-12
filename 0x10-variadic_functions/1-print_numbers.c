#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - main function that prints numbers
 * @separator: parameter 1
 * @n: parameter 2
 * @...: parameter 3
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(a, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(a);
}
