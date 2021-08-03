#include "lists.h"

/**
 * sum_listint - retruns the sum of all the data(n)
 * of listint_t list
 * @head: pointer to the linked list
 * Return: sum of all the data of listint_t list
 * or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
