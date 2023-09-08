#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an ekement to the hash table
 * @ht: The hash table to which the element is added
 * @key: the key to be added
 * @value: The value associated with the key
 *
 * Return: 1 on success or 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if(strcmp(current->key, key) == 0)
		{
			char *new_value = strdup(value);
			
			if (new_value == NULL)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}


	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
