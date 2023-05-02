#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list in the program
 * @head: the header to be used in the program
 * Return: NULL
 */

void free_listint2(listint_t **head)

{

listint_t *temp;

if (head == NULL)

return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;


}
