#include "holberton.h"

/**
 * puts_half - prints the second half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int x, y, z;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (y = x / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	} else if (x % 2)
	{
		for (z = (x - 1) / 2; z < x - 1; z++)
		{
			_putchar(str[z + 1]);
		}
	}
	_putchar('\n');
}
