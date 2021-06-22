#include "holberton.h"
/** Task Two: 2-print_alphabet_x10.c*/
/**
 * print_alphabet - prints the alphabet in lowercase, followed by  new line
 */
void print_alphabet(void)
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
