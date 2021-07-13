#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args of the program
 * @ac: no of args passed
 * @av: an array of pointers to the args
 * Return: if ac == 0, av == NULL, or func fails - NULL.
 * Otherwise - pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s++;
	}

	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];

		str[i++] = '\n';
	}

	str[s] = '\0';

	return (str);
}
