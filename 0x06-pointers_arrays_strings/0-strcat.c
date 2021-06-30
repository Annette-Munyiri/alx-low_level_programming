#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string that is appended
 * @src: string to append
 * Return: pointer to the resultant string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
