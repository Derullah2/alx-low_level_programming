#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: the header to be used in the program
 * @index: the index of the node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{



unsigned int leo = 0;

listint_t *temp = head;

while (temp && leo < index)
{
temp = temp->next;
leo++;
}

return (temp ? temp : NULL);

}
