#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node at a given
 * position of a list
 * @head: the header tio be used in the program
 * @idx: the index
 * @n: the char to work with in the  program
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{

unsigned int k;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (k = 0; temp && k < idx; k++)
{
if (k == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;

}


return (NULL);


}
