#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: allocates memory for an array
 * @size: size of bytes
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int i = 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);
	while (i < k)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
