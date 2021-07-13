#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: array's width
 * @height: array's height
 * Return: if width <= 0, height <= 0, or the func fails - NULL.
 * Otherwise - a pointer to the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **tD;
	int h_i, w_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	tD = malloc(sizeof(int *) * height);

	if (tD == NULL)
		return (NULL);

	for (h_i = 0; h_i < height; h_i++)
	{
		tD[h_i] = malloc(sizeof(int) * width);

		if (tD[h_i] == NULL)
		{
			for (; h_i >= 0; h_i--)
				free(tD[h_i]);

			free(tD);
			return (NULL);
		}
	}

	for (h_i = 0; h_i < height; h_i++)
	{
		for (w_i = 0; w_i < width; w_i++)
			tD[h_i][w_i] = 0;
	}

	return (tD);
}
