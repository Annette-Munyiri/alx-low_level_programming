#include <stdlib.h>

/**
 * _calloc - call
 * @nmemb: n
 * @size: memory
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(mem + i) = 0;

	return ((void *)mem);
}
