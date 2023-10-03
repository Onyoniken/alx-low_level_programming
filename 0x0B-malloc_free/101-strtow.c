#include <stdlib.h>
#include "main.h"

/**
 * count_word - reckons words in a string
 * @s: string in which words are counted
 *
 * Return: count of words in a string
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

		for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - breaks down a string into distinct characters
 * @str: subject string to break down
 *
 * Return: pointer strings, words (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **d, *e;
	int f, g = 0, h = 0, i, j = 0, k, l;

	while (*(str + h))
		h++;
	i = count_word(str);
	if (i == 0)
		return (NULL);

	d = (char **) malloc(sizeof(char *) * (i + 1));
	if (d == NULL)
		return (NULL);

	for (f = 0; f <= h; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (j)
			{
				l = f;
				e = (char *) malloc(sizeof(char) * (j + 1));
				if (e == NULL)
					return (NULL);
				while (k < l)
					*e++ = str[k++];
				*e = '\0';
				d[g] = e - j;
				g++;
				j = 0;
			}
		}
		else if (j++ == 0)
			k = f;
	}

	d[g] = NULL;

	return (d);
}
