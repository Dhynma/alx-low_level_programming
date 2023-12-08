#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Doubly linked list
 * Return: Nothing, just free everything
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual = head;

	while (head)
	{
		actual = head;
		head = actual->next;
		free(actual);
	}
}
