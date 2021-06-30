#include "holberton.h"

/**
 * *_strncat - concatenates n bytes from a string to another
 * @dest: string appended to
 * @src: string to append
 * @n: limit of bytes to concatenate
 * Return: a pointer to the resusltant string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
