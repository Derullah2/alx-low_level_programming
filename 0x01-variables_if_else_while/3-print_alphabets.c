#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * Return: 0
 *
 */

int main(void)
{


int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (a = 97; a <= 122; a++)
	{
		putchar(a - 32);
	}
	putchar(10);
	return (0);


}
