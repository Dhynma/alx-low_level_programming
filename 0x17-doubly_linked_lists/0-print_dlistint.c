#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints elements of a doubly linked list
 * @h: Pointer to the first node
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *buf;

    buf = h;
    while (buf != NULL)
    {
        printf("%d\n", buf->n);
        buf = buf->next;
        count++;
    }
    return (count);
}
