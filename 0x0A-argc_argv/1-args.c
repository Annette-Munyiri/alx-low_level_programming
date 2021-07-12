#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no of arguments
 * @argc: no of argument
 * @argv: argument vector
 * Return: Always 0(On success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
