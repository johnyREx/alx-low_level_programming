#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: Pointer to the head of the doubly liinked list.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
