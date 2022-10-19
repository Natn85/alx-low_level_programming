#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table to create
 * Return: pointer to the newly created table
 */
hash_table_t *hash_table_create(ulint size)
{
	table *hash;
	node **array;
	ulint i;

	hash = malloc(sizeof(table));
	if (!hash)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash->size = size;
	hash->array = array;

	return (hash);
}
