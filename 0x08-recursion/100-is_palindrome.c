#include "main.h"

int check_pal(char *s, int j, int k);
int _strlen_recursion(char *s);

/**
 * is_palindrome - determines  a palindrome
 * @s: string that should be reversed
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to evaluate
 * @j: iterator
 * @k: string length
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int j, int k)
{
	if (*(s + j) != *(s + k - 1))
		return (0);
	if (j >= k)
		return (1);
	return (check_pal(s, j + 1, k - 1));
}

