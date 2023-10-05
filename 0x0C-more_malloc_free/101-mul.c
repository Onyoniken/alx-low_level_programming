#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * is_digit -ascertains for digit
 * @s: string to be analyzed
 * Return: 0 on locating a digit, 1 if not
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
	if (s[k] < '0' || s[k] > '9')
	return (0);
	k++;

	}
	return (1);

}
/**
 * _strlen - function that returns string length
 * @s: string under evaluation
 * Return: string length
 */
int _strlen(char *s)
{
	int k = 0;
	while (s[k] != '\0')
	{
	k++;
	}
	return (k);
}
/**
 * errors - detects errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**

 * main - function that multiplies a couple of unsigned intergers

 * @argc: argument numbers

 * @argv: array numbers

 *

 * Return: 0

 */

int main(int argc, char *argv[])

{
	char *a, *b;
	int c, d, e, f, g, h, i, *j, k = 0;


	a = argv[1], b = argv[2];

	if (argc != 3 || !is_digit(a) || !is_digit(b))

	errors();

	c = _strlen(a);

	d = _strlen(b);

	e = c + d + 1;

	j = malloc(sizeof(int) * e);

	if (!j)

	return (1);

	for (f = 0; f <= c + d; f++)

	j[f] = 0;

		for (c = c - 1; c >= 0; c--)

	{

		h = a[c] - '0';

		g = 0;

		for (d = _strlen(b) - 1; d >= 0; d--)

	{

		i = b[d] - '0';

		g += j[c + d + 1] + (h * i);

		j[c + d + 1] = g % 10;

		g /= 10;

	}

	if (g > 0)

	j[c + d + 1] += g;

	}

	for (f = 0; f < e - 1; f++)

	{

	if (j[f])

	k = 1;

	if (k)

	_putchar(j[f] + '0');

	}

	if (!k)

	_putchar('0');

	_putchar('\n');

	free(j);

	return (0);

}
