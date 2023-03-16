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
	long long int d;
	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(integerType));
	printf("Size of float: %lu bytes\n", (unsigned long)sizeof(floatType));
	printf("Size of double: %lu bytes\n", (unsigned long)sizeof(doubleType));
	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(charType));
	return (0);
}
