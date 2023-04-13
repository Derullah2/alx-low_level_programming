#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - cheeks the malloc memmory
 * @b: character
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}
