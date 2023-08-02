#include "lists.h"

/**
 * delete_nodeint_at_index - to delete a node in a linked list at an index
 * @head: head
 * @index: index of the deleted node
 *
 * Return: 1 if it succeds, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (i < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);
		prev = prev->next;
		i++;
	}


	curr = prev->next;
	prev->next = curr->next;
	free(curr);

	return (1);
}
