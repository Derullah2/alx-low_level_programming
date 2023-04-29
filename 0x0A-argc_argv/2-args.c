#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int coun;

	for (coun = 0; coun < argc; coun++)
		printf("%s\n", argv[coun]);

	return (0);
}
