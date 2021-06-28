#include "holberton.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
