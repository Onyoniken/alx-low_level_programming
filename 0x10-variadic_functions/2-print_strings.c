#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - main function that prints string
 * @separator: separate strings
 * @n: string number
 * @...: strings printed
 *
 * Description: if separaot is NULL, not printed.
 * If a string is NULL, (nil) is printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *b;
	unsigned int c;

	va_start(a, n);

	for (c = 0; c < n; c++)
	{
		b = va_arg(a, char *);

		if (b == NULL)
			printf("(nil)");
		else
			printf("%s", b);

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(a);
}
