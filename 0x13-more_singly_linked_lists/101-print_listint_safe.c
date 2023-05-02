#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t LoopedListintLen(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * LoopedListintLen - Counts the number of  nodes
 * in a looped listint_t lnkd list in tye prpogram
 * @head: the header to be ude in the program.
 *
 * Return: 0.
 */
size_t LoopedListintLen(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nod = 1;

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
nod++;
tortoise = tortoise->next;
hare = hare->next;
}
tortoise = tortoise->next;
while (tortoise != hare)
{
nod++;
tortoise = tortoise->next;
}

return (nod);
}

tortoise = tortoise->next;
hare = (hare->next)->next;
}

return (0);
}

/**
 * print_listint_safe - function that prints the nod at index in the program
 * @head: the header to be used in the program
 * Return: 1 if it succeeded else -1 if it failed
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nod, ind = 0;

nod = LoopedListintLen(head);

if (nod == 0)
{
for (; head != NULL; nod++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (ind = 0; ind < nod; ind++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nod);
}
