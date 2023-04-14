# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * _realloc - function to reallocate a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: current memory space for ptr
 * @new_size: new size of the new memory block
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;

	new_pointer = 0;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_pointer = malloc(new_size);
	free(ptr);

	return (new_pointer);
}
