#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list at a given position
 * @head: head
 * @idx: index of the list where the new node is added
 * @n: data of the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *curr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; curr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
			curr = curr->next;
	}

	return (NULL);
}
