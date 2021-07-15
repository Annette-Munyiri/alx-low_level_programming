#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: smallest int
 * @max: smallest int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);

	m = malloc((max - min + 1) * sizeof(int));

	if (m == 0)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		m[i] = min + i;

	return (m);
}
