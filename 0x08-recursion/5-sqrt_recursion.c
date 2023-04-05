#include "main.h"
/**
 * _sqrt_recursion - repition of numbers
 * @n: interger 0
 * Return: Results
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual _sqrt_recursion(n, 0));
}
/**
 * _sqrt_recursion - repitation
 * @n: interger 1
 * @i: interger 2
 * Return: Ther results
 */
int actual _sqrt_recursion(int n, int i)
{

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual _sqrt_recursion(n, i + 1));

}
