#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 * @a: first number
 * @b: second number
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @a: first number
 * @@b: second number
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the result of the division of a by b
 * @a: first number
 * @b: second number
 * Return: qoutient of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of a by b
 * @a: first number
 * @b: second number
 * Return: remainder of two number
 */
int op_mod(int a, int b)
{
	return (a % b);
}
