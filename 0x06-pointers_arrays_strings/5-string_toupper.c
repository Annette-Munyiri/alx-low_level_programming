#include "holberton.h"

/**
 * *string_toupper - changes lowercase to uppercase
 * @s: string to uppercase
 * Return: The result string
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
	}

	return (s);
}
