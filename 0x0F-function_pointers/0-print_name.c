#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - main function
 * @name: string parameter
 * @f: function parameter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
