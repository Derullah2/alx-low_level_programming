#include "lists.h"

/**
 * add_nodeint - adds nodes interger at the beg of a line
 * @head: header
 * @n: char to work wiyh in the program
 * Return: NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);


}
