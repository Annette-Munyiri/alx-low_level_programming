#include "holberton.h"
/**
 * cap_string - capitalizes all words in string
 * @s: input value
 * Return: string
 */
char *cap_string(char *s)
{
	int x;

	x = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (x = 0; s[x] != '\0'; x++)
	{
		switch (s[x])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[x + 1] > 96 && s[x + 1] < 123)
				{
					s[x + 1] = s[x + 1] - 32;
				}
		}
	}
	return (s);
}
