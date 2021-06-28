#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int x, y, z;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x;

	for (z = y - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
