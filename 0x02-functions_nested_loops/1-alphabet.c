#include "holberton.h"
/** Task One: 1-alphabet.c*/
/**
 * print_alphabet - prints alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
