#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @argc:  arguments count
 * @argv: arguments vector
 * Return: 0 else 1
 */

int main(int argc, char *argv[])

{
	int amt, arg, baln;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);
	baln = 0;

	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	for (arg = 0; arg < 5 && amt >= 0; arg++)
	{
		while (amt >= cents[arg])
		{
			baln++;
			amt -= cents[arg];
		}
	}

	printf("%d\n", baln);
	return (0);
}
