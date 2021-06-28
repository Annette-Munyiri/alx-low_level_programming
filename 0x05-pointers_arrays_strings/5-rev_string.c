#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char w;
	int x, y, z;

	y = 0;
	z = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	z = y - 1;

	for (x = 0; x < y / 2; x++)
	{
		w = s[x];
		s[x] = s[z];
		s[z--] = w;
	}
}
