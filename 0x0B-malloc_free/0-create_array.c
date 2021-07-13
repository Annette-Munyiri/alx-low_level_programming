#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * & initializes it with a specific char.
 * @size: size of the array to be initialized.
 * @c: specific char to initialize the array with.
 * Return: if size == 0 or the function fails - NULL
 * Otherwise - a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
