#include <stdio.h>
/** Task Fifteen: 103-fibonacci.c */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fsum;
	float tsum;

	while (1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;

		if ((fsum % 2) == 0)
			tsum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", tsum);
	return (0);
}
