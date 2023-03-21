#include <stdio.h>
/**
 * main - this a main function
 *
 * Return: 0
 */
int main(void)
{
	short a, b;

	for (a = 0; b <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b)
			{
				short a1 = a / 10;
				short a2 = a % 10;
				short b1 = b / 10;
				short b2 = b % 10;

				putchar(a1 + '0');
				putchar(a2 + '0');
				putchar(' ');
				putchar(b1 + '0');
				putchar(b2 + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar("\n");
	return (0);
}
