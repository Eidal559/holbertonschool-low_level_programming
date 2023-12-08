#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* print_hash_table - Prints the contents of a hash table.
* @ht: The hash table to print.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL)
return;

printf("{\n");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
if (node->next != NULL)
printf(", ");
node = node->next;
}
}
printf("}\n");
}
