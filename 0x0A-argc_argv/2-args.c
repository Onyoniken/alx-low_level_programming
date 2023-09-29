#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments received
 * @argc: arguments numbers
 * @argv: arguments arrays
 *
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
