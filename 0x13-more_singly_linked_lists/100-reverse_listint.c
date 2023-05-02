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
listint_t *nextinline = NULL;

while (*head)
{
nextinline = (*head)->nextinline;
(*head)->nextinline = previous;
previous = *head;
*head = nextinline;
}

*head = previous;

return (*head);
}
