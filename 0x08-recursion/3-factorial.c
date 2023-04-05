#include "main.h"
/**
 * factorial - calculates the addtion of a given number
 * @n: integer
 * Return: 1 or 0
 */
int factorial(int n)

{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
