#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated upon
 * @s2: string to be concatenated to s1
 * Return: if concatenation fails - NULL
 * Otherwise, a pointer the newly allocated space in memory
 * containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int i, c_i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	c_str = malloc(sizeof(char) * l);

	if (c_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c_str[c_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		c_str[c_i++] = s2[i];

	return (c_str);
}
