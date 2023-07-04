#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets head to NULL
 * @head: A pointer to a pointer to the head of the listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
