#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
  unsigned long int i;

  hash_table_t* new_table = (hash_table_t*)malloc(sizeof(hash_table_t));
  new_table->size = size;
  new_table->array = (hash_node_t**)malloc(size* sizeof(hash_node_t*));
  for (i = 0; i < new_table->size; i++)
    new_table->array[i] = NULL;
  return (new_table);
}
