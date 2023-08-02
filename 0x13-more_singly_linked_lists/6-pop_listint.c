#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: first node to be deleted
 *
 * Return: the data in the head(first node)
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int qty;

	if (!head || !*head)
		return (0);

	qty = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;

	return (qty);
}
