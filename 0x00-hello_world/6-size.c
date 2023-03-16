#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)

{
	int integerType;
	float floatType;
	long long doubleType;
	long int a;
	char charType;

	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(integerType));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(doubleType));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	return (0);
}
