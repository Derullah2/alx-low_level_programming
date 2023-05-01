#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that delt the nod at index in the program
 * @head: the header to be used in the program
 * @indext: the indext to be deleted
 * Return: 1 if it succeeded else -1 if it failed
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nds, ind = 0;

nds = LoopedListintLen(head);

if (nds == 0)
{
for (; head != NULL; nds++)

{

printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else

{
for (ind = 0; ind < nds; ind++)

{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nds);
}

