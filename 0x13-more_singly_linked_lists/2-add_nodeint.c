#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning
 * @head: pointer to the head
 * @n: inserted element
 *
 * Return: pointer to the new element || NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
