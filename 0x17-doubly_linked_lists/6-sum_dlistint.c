#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all nodes in a doubly linked list
 * @head: Doubly linked list
 * Return: Sum of all node values
 **/
int sum_dlistint(dlistint_t *head)
{
	int acumm = 0;

	if (!head)
		return (0);

	while (head)
	{
		acumm += head->n;
		head = head->next;
	}

	return (acumm);
}
