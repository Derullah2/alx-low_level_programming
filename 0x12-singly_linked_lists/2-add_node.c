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

	list_t *temp;
	int len2 = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len2])
		len2++;

	temp->len = len2;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp
	return (temp);


}
