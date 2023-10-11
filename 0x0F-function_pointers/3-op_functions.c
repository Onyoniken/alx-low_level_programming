#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);

}
/**
 * op_sub - adds 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - adds 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remindr of div of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: modulus of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

