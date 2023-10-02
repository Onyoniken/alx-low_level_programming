#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to a new string which is a duplicate of str
 * @str: string
 *
 * Return: 0
 *
 */
char *_strdup(char *str)
{
	char *iii;
	int j, k = 0;

	if (str == NULL)
		return (NULL);

	j = 0;

	while (str[j] != '\0')
		j++;

	iii = malloc(sizeof(char) * (j + 1));
			if (iii == NULL)
			return (NULL);

	for (k = 0; str[k]; k++)
	iii[k] = str[k];

	return (iii);
}
