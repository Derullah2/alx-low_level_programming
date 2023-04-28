#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: string to look at
 * Return: NULL
 */

size_t print_list(const list_t *h)
{
size_t rogat = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
rogat++;
}

return (rogat);
}
