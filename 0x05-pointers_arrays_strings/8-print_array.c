#include "holberton.h"

/**
 * print_array - prints elements in an array
 * @n: number of elements of the array to be printed
 * @a: array/
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
