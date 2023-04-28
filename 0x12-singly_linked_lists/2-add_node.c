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
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

strncpy = strdup(str);
 if (strncpy == NULL)
{
free(new_node);
return NULL;
}
new_node->str = strncpy;
new_node->next = *head;
*head = new_node;

return (new_node);
}
