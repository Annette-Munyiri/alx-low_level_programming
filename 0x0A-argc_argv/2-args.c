#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (On success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
