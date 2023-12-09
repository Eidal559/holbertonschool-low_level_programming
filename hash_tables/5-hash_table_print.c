#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - Prints the contents of the hash table
* @ht: Pointer t the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int first = 1;
hash_node_t *current;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
if (first == 0)
printf(", ");
printf("'%s: '%s'", current->key, current->value);
first = 0;
current = current->next;
}
}
printf("}\n");
}
