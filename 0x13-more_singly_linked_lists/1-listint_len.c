#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list in the program
 * @h: the char to work with in the program
 * Return: No of elemnts in listint_t
 */
size_t listint_len(const listint_t *h)
{


	size_t NUMBERS = 0;

	while (h)
	{
	NUMBERS++;
		 h = h->next;
	}

	return (NUMBERS);
}
