#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - test for interger if is an even number
 * @n: interger
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - cheecks priome number
 * @n: interger 1
 * @i: interger 2
 * Return: 1 or 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, n - 1));
}
