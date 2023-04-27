#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - listes all line
 * @h: the line to be listed
 * Return: NULL
 */
size_t list_len(const list_t *h)
{


unsigned int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
