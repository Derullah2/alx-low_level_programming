#include "main.h"
/**
 * main -main entry
 * factorial - factorial of a given number
 * @n: integer
 * Return: 1 or 0
 */
int factorial(int n)

{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}

int main(void)

{
	_putchar(4);
	return (0);
}
