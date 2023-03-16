#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %ld bytes\n", (unsigned long)sizeof(integerType));
	printf("Size of float: %ld bytes\n", (unsigned long)sizeof(floatType));
	printf("Size of double: %ld bytes\n", (unsigned long)sizeof(doubleType));
	printf("Size of char: %ld bytes\n", (unsigned long)sizeof(charType));
	return (0);
}
