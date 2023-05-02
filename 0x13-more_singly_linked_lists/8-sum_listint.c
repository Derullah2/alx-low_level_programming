#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that sum of all the data (n) of a listint_t linked
 * @head: the bheader to work with
 * Return: 0
 */

int sum_listint(listint_t *head)

{
int sumation = 0;
listint_t *temp = head;

while (temp)
{
sumation = sumation + temp->n;
temp = temp->next;
}

return (sumation);

}
