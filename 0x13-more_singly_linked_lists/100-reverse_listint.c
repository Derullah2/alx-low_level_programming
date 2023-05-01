#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t LoopedListintLen(const listint_t *head);
size_t printlistsafe(const listint_t *head);

/**
 * LoopedListintLen - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A Pointer to the header of the listint to chec
 * Return: If the list is not looped - 0.
 */
size_t LoopedListintLen(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tortoise = head->next;
hare = (head->next)->next;

while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}

tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}

return (nodes);
}

tortoise = tortoise->next;
hare = (hare->next)->next;
}

return (0);
}

/**
 * printlistsafe - Prints a listint
 * @head: A pointer to the head of the listint
 *
 * Return: The number of nodes in the list
 */
size_t printlistsafe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = LoopedListintLen(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
{

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
