#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (b = 0; s[b] != '\0'; b++)
	{
	for (a = 0; accept[a] != '\0'; a++)
	{
	if (s[b] == accept[a])
	return (s + b);
	}
	}
	return (0);
}

