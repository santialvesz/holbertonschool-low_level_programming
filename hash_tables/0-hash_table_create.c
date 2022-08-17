#include "main.h"



hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	if (size = 0)
	{
		return (NULL);
	}
	
	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
	{
		return (NULL);
	}

