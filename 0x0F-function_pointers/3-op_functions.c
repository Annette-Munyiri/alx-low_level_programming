#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - returns sum of a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diff of a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remaindder of the division of a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder from the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
