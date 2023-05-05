#include "main.h"

/**
 * get_endianness - function that checks the endianness in the program
 * @void: nothing
 * turn: 0 or 1
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
