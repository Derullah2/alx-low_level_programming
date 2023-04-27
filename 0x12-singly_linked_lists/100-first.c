#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void first(void) __attribute__ ((constructor));
/**
 * first - prints a charctar first
 * DERULLAH RED_BLACK
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}

