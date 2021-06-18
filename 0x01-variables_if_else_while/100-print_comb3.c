#include <stdio.h>
/** Script Ten: 100-print_comb3.c (advanced)*/
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	for (n = 0; n < 10; n++)
	{
		for (p = 0; p < 10; p++)
		{
			putchar((n % 10) + '0');
			putchar((p % 10) + '0');

			if (n == 9 && p == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
