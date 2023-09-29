#include <stdio.h>
#include "main.h"
/**
 * main - number of arguments to be passed are preinted
 * @argc: arguments number
 * @argv: array numbers
 *
 * Return: (0) success
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
