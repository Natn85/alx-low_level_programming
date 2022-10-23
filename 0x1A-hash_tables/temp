#ifndef __THIS_IS_100_01__
#define __THIS_IS_100_01__

#include "hash_tables.h"
#define __local __attribute__((weak))

/**
 * shash_table_create - create sorted hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
__local
shash_table_t *shash_table_create(ulint size)
{
	shash_table_t *ht;
	shash_node_t **array;
	ulint i = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	ht->size = size;
	ht->array = array;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * insert_to_sorted_list - compare abcs and insert node into
 * list (for printing)
 * @ht: sorted hash table
 * @node: node to insert
 * Return: 1 if success, 0 if fail
 */
__local
int insert_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	/* if empty hash table, initialize head and tail nodes */
	if (!(ht->shead))
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	if (strcmp(node->key, (ht->shead)->key) <= 0) /* insert at beginning */
	{
		node->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, (ht->stail)->key) > 0) /* insert at end */
	{
		node->sprev = ht->stail;
		(ht->stail)->snext = node;
		ht->stail = node;
	}
	else /* insert in middle */
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(node->key, (tmp->snext)->key) > 0)
			tmp = tmp->snext;
		node->snext = tmp->snext;
		node->sprev = tmp;
		(tmp->snext)->sprev = node;
		tmp->snext = node;
	}
	return (1);
}

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: sorted hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
__local
int create_and_add_node(shash_table_t *ht, const char *key, const char *value,
			ulint idx)
{
	shash_node_t *node = NULL;
	char *k;
	char *v;
	(void) idx;
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (insert_to_sorted_list(ht, node));
}

#endif
