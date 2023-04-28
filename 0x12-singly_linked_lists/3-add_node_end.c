#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>

int _strlength(const char *y);

void *_strdup(const char *src);

/**
 * add_node_end - function (program) that adds a new node at the end of a list
 * @head: head of the working list
 * @str: string of the list
 * Return: NULL (nothing)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newt, *prest_node;

	newt = malloc(sizeof(list_t));
	if (newt == NULL)
		return (NULL);

	newt->len = _strlength(str);
	newt->str = _strdup(str);
	newt->next = NULL;
	if (*head == NULL)
		*head = newt;
	else
	{
		prest_node = *head;
		while (prest_node->next)
			prest_node = prest_node->next;
		prest_node->next = newt;
	}
	return (*head);
}


/**
 * _strlength -a  funct tha prints the output of length of the string
 * @y: string to work with on the program
 * Return: strlength
 */
int _strlength(const char *y)
{
	int contt;

	for (contt = 0; y[contt]; contt++)
		;
	return (contt);
}

/**
 * _strdup - function to duplicate string from src
 * @src:place where  string is to be duplicated
 * Return: destination of  copied string
 */
void *_strdup(const char *src)
{
	int leng;
	int contt;
	char *dest;

	leng = _strlength(src);
	dest = malloc((leng + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (contt = 0; src[contt]; contt++)
		dest[contt] = src[contt];
	dest[contt] = '\0';
	return (dest);
}

