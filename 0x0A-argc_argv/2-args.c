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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
