#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_no = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes_no++
		h = h->next;
	
	}
	return (nodes_no);
}
