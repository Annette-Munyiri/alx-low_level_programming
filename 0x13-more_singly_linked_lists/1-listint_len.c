#include "lists.h"

/**
 * listint_len - prints number of elements in a listint_t list
 * @h: pointer to head of listint_t list
 * Return: number of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
