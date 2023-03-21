#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			if (n < m && n != m)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n + m != 17)
			{
					putchar(',');
					putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
