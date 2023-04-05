#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s -- '\0')
	{
	_putchar('\n')
		return 0;
	}
	else
	{
	_putchar(*s);
	_putchar(*s++);
	}

}
