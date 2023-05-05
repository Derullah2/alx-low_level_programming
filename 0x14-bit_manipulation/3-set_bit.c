#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1 to the program
 *
 * @n: number to change
 *
 * @index: index to set to 1
 *
 * Return: 1 for success else -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
