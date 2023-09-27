#include "main.h"
/**
 * _strlen_recursion - mainfunction that returns the length of a string
 * @s: parameter string whose length is meaasured
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
