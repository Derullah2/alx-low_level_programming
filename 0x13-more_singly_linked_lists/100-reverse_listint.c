#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list in the program
 * @head: the header tio work with in the program
 *
 * Return: node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}

*head = previous;

return (*head);
}
