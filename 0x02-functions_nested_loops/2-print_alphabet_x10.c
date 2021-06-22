#include "holberton.h"
/** Task Two: 2-print_alphabet_x10.c*/
/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int y;
	char x;

	y = 0;

	while (y < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
