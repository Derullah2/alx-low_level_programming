#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 *
 * @n: number to search in the propgram
 *
 * @index: bit index
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bival;

	if (index > 63)
		return (-1);

	bival = (n >> index) & 1;

	return (bival);
}
