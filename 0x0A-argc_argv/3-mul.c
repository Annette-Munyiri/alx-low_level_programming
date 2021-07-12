#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: arg counter
 * @argv: arg vector
 * Return: Always 0 (On success)
 */
int main(int argc, char *argv[])
{
	int x, y;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
