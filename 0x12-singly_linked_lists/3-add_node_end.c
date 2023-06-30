#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds new node at end of a list_t list.
 * @head: Pointter to a pointer to the head of the list.
 * @str: String to be duplicated and added as the new value of node.
 *
 * Return: The address of the new node, NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
