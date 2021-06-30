#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: string appended
 * @src: string to append
 * @n: limit of bytes to copy
 * Return: the pointer to resultant string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
