#include <stdio.h>
#include "holberton.h"
/** Task Eleven: 11-print_to_98*/
/**
 * print_to_98 - prints all natural numbers from input to 98
 * @n: the no. to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
