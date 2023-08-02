#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in the list
 * @head: first node of a list.
 *
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
