#include "holberton.h"

/**
 * *_memcpy - copies mem area
 * @dest: destination mem area
 * @src: mem area to copy from
 * @n: no of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
