#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints base 16
 * Return: 0 always
 */

int main(void)
{


	int a;

	for (a = 48; a <= 122; a++)
	{
		if (a >= 48 && a <= 57)
		{
			putchar(a);
		}

		if (a >= 97 && a <= 102)
		{
			putchar(a);
		}

	}
	putchar(10);
	return (0);


}
