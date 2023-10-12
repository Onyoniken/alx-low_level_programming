#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - main function to print
 * @format: parameter that lists arguments
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *x, *y = "";

	va_list z;

	va_start(z, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", y, va_arg(z, int));
					break;
				case 'i':
					printf("%s%d", y, va_arg(z, int));
					break;
				case 'f':
					printf("%s%f", y, va_arg(z, double));
					break;
				case 's':
					x = va_arg(z, char *);
					if (!x)
						x = "(nil)";
					printf("%s%s", y, x);
					break;
				default:
					k++;
					continue;
			}
			y = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(z);
}

