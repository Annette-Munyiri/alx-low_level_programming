#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: less than 0 if s1 is less than s2, 0 if equal
 * more than 0 if is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
