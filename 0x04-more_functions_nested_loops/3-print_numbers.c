#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: 0
 */
void print_numbers(void)
{
	int x;
	for (x = 0; x < 10; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
}
