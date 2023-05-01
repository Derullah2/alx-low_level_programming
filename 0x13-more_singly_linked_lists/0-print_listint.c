#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - prints all the elements of a listint_t list in the program
 * @h: char to work with
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{


{
	size_t ndes;


	ndes = 0;

	do {
		printf("%d\n", h->n);
		ndes++;
		h = h->next;
	} while (h != NULL);

	return (ndes);
}




}
