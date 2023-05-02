#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * in the program
 * @head: the header to work with in the program
 * Return: NULL
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int NO;

if (!head || !*head)
return (0);

NO = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (NO);
}
