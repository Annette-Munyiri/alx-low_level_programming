#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to the first element
 * @index: index of the node starting at 0
 * Return: nth node of listint_t list
 * or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
