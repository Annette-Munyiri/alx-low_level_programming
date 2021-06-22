#include "holberton.h"
/** Task Seven: 7-print_last_digit.c*/
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to get the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;

	if (x < 10)
		x = -x;

	_putchar(a + '0');

	return (x);
}
