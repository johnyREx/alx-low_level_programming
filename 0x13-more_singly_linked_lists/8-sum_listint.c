#include "lists.h"

/**
 * sum_listint - returns the sum of all dats of a listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: The sum of all the data, or ) if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
