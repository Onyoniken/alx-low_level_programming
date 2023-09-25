#include "main.h"

/**
  * _strchr - main function
  *
  * @s:function parameter 1
  *
  * @c:function parameter 2
  *
  * Return: c.
  */
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
	if (s[m] == c)
	return (s + m);
	}
	return (0);
}
