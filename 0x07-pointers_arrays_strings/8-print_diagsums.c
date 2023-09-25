#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function of the prototype
  *
  * @size: function parameter 1
  *
  * @a: function parameter 2
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int y;

	count1 = 0;
	count2 = 0;

	for (y = 0; y < size; y++)
	{
	count1 = count1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
	count2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", count1, count2);
}

