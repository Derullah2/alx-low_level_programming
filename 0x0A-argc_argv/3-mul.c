#include <stdio.h>
#include <stdlib.h>

/**
 * main - main main entry
 * @argc: arguments count  passed
 * @argv: atual arguments vector passed
 * Return: 0 else 1
 */
int main(int argc, char **argv)
{
	int NO1, NO2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	NO2 = atoi(argv[2]);
	NO1 = atoi(argv[1]);
	printf("%d\n", NO1 * NO2);

	return (0);
}
