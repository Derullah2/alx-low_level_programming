#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list in the program
 * @head: the header to be used at the end of the program
 * @n: the char to be used in the pprogra,
 * Return: NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *newly;
listint_t *temp = *head;

newly = malloc(sizeof(listint_t));
if (!newly)
return (NULL);

newly->n = n;
newly->next = NULL;

if (*head == NULL)

{

*head = newly;

return (newly);

}

while (temp->next)
temp = temp->next;

temp->next = newly;


return (newly);
}

