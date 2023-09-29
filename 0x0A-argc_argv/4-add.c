#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks for digits
 * @str: string
 *
 * Return: 0 (Success)
 */
int check_num(char *str)
{
	unsigned int l;

	l = 0;
	while (l < strlen(str))

	{
		if (!isdigit(str[l]))
		{
			return (0);
		}

		l++;
	}
	return (1);
}

/**
 * main - the main function
 * @argc: counts the number of arguments
 * @argv: Argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int l;
	int str_to_int;
	int sum = 0;

	l = 1;
	while (l < argc)
	{
		if (check_num(argv[l]))

		{
			str_to_int = atoi(argv[l]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		l++;
	}

	printf("%d\n", sum);

	return (0);
}
