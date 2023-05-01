#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list in the program
 * @h: the char to work with in the program
 * Return: NULL
 */
size_t free_listint_safe(listint_t **h)
{
size_t lenth = 0;
int deff;
listint_t *temp;

if (!h || !*h)
return (0);
while (*h)
{
deff = *h - (*h)->next;
if (deff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
lenth++;

}

else

{

free(*h);
*h = NULL;
lenth++;
break;

}
}

*h = NULL;

return (lenth);

}

