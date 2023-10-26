#include "main.h"

/**
 * get_endianness - main function
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int j = 1;
	char *k;

	k = (char *)&j;
	return (*k);
}
