#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees nodes in a listint_t
 * @head: char to work with in the program
 * Return: NULL if it fail
 */

void free_listint(listint_t *head)
{

listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}



}
