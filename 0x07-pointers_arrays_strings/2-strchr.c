#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to find
 * @c: char to find
 * Return: pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (i)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
