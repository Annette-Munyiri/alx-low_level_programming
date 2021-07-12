#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 * @argc: arg counter
 * @argv: arg vector
 * Return: 1 if negative or char, otherwise 0
 */
int main(int argc, char *argv[])
{
	int n, d, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum  += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
