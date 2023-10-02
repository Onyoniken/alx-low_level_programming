#include "main.h"
#include <stdlib.h>

/**
 * str_concat - memory of input to concatenate
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: concatenates s1 & s2
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;

	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;
	while (s1[b] != '\0')
		b++;
	conct = malloc(sizeof(char) * (a + b + 1));

	if (conct == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		conct[a] = s2[b];
		a++, b++;
	}
	conct[a] = '\0';
	return (conct);
}

