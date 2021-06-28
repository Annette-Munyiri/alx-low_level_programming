#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: The length of string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
