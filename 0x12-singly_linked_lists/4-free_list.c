
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the lists used in the program
 * @head: the list to be freed by function free
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *tempoaddr;

	tempoaddr = head;
	while (head)
	{
		tempoaddr = head;
		head = head->next;
		free(tempoaddr->str);
		free(tempoaddr);
	}
	free(head);
}
