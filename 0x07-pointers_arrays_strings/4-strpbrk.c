#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: set of bytes to be searched
 * Return: number of bytes in s which consists of bytes
 * from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
