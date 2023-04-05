#include "main.h"
/**
 * _strlen_recursion - function that returns 1 if a string is a palindrome 0
 * if not
 * @s: string
 * Return: the lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compare character on a string
 * @s: string
 * @n1: character 1
 * @n2: character 2
 * Return: 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
	if (n1 == n2 || n1 == n2 + 1)
		return (1);
	return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);

}
