#include "holberton.h"
/** Task 3 */
/**
 * print_numbers - print numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
