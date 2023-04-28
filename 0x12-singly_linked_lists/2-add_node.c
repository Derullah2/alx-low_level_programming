#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _stringlenth(const char *d);
void *_strdup(const char *src);

/**
 * add_node - addes nodes to the program
 * @head: head of node
 * @str: string to work with
 * Return: NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);

	newhead->len = strlen(str);
	newhead->str = _strdup(str);
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}

/**
 * _stringlenth - prints out the  string lenths
 * @d: string to print on the program
 * Return: strlen
 */
int _stringlenth(const char *d)
{
	int con;

	for (con = 0; d[con]; con++)
		;
	return (con);
}

/**
 * _strdup - funct to duplicate string from src to dest
 * @src: string to be duplicated is here
 * Return: destination of  copied string
 */
void *_strdup(const char *src)
{
	int lengths;
	int con;
	char *dest;

	lengths = _stringlenth(src);
	dest = malloc((lengths + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (con = 0; src[con]; con++)
		dest[con] = src[con];
	dest[con] = '\0';
	return (dest);
}
