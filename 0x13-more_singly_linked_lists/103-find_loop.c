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

listint_t *slw = head;
listint_t *fa = head;

if (!head)

return (NULL);

while (slw && fa && fa->next)
{
fa = fa->next->next;
slw = slw->next;
if (fa == slw)
{
slw = head;
while (slw != fa)
{
slw = slw->next;
fa = fa->next;
}
return (fa);
}
}

return (NULL);
}

