#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);

		current = current->next;
	}

	return (NULL);
}
