#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another in the program
 * @n: parameter 1
 * @m: parametr 2
 *
 * Return: number of bits to change in the program
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int cnts;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cnts = exclusive >> i;
		if (cnts & 1)
			cnt++;
	}

	return (cnt);
}
