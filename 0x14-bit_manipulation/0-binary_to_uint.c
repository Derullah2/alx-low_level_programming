#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an  int
 * @b: is pointing to a string of 0 and 1 chars in tyhe program
 * Return: 0 or 1 where b is NULL
 */

unsigned int binary_to_uint(const char *b);
{

	int k;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}

	return (dec_val);
}
