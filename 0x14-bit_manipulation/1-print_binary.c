#include "main.h"

/**
 * print_binary - the binary equivalent of a decimal number
 * @n: number to print in binary of the program
 */
void print_binary(unsigned long int n)

{
	int k, cunt = 0;
	unsigned long int crent;

	for (k = 63; k >= 0; k--)
	{
		crent = n >> k;

		if (crent & 1)
		{
			_putchar('1');
			cunt++;
		}
		else if (cunt)
			_putchar('0');
	}
	if (!cunt)
		_putchar('0');
}
