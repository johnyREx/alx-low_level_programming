#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: Pointer to the head of the doubly linked list.
 * @index: index of the node, from 0;
 *
 * Return: Pointer to the nth node, or NULL on failure.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
