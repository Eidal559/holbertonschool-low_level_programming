#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the linked list.
*
* Return: The number of nodes in the linked list.
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("[%u] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
h = h->next;
count++;
}
printf("-> %lu elements%s\n", count, count != 1 ? "s" : "");
return (count);
}
