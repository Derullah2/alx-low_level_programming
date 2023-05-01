#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * find_listint_loop - finds the loop in a linked list in the program
 * @head: the header to work with in the program
 * Return: NULL if there is no loop or adrr of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{

listint_t *linkedloop = head;
listint_t *first = head;
if (!head)
return (NULL);

while (linkedloop && first && first->next)

{

first = first->next->next;
linkedloop = linkedloop->next;

if (first == linkedloop)
{
linkedloop = head;

while (linkedloop != first)
{
linkedloop = linkedloop->next;
first = first->next;
}
return (first);
}

}
