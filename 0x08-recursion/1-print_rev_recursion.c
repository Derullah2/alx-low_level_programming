#include "main.h"
/**
 * _print_rev_recursion -  print a string to reverse
 * @s: string
 * Return: nothingg
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
