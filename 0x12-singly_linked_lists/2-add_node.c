#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - addes nodes to the program
 * @head: head of node
 * @str: string to work with
 * Return: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *old;
unsigned int log = 0;

while (str[log])
log++;

old = malloc(sizeof(list_t));
if (!old)
return (NULL);

old->str = strdup(str);
old->log = log;
log->next = (*head);
(*head) = pld;

return (*head);
}
