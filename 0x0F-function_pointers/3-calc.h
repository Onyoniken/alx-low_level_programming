#ifndef calc_h
#define calc_h

/**
 * struct op - main function
 * @op: operator
 * @f: associated function
 */
typedef struct op
{
	char *op;
	int (*f)(int j, int k);

} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
