#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main entry
 * @argc: arguments count passed
 * @argv: arguments vector passed
 * Return: 0 else 1
 */

int main(int argc, char *argv[])
{
	int totalsum = 0;
	int arg;
	const char *numb2;
	const char *symb;

	for (arg = 1; arg < argc; arg++)
	{
		numb2 = argv[arg];
		for (symb = numb2; *symb != '\0'; symb++)
		{
			if (!isdigit(*symb))
			{
				printf("Error\n");
				return (1);
			}
		}
		total_sum = totalsum + atoi(numb2);
	}
	printf("%d\n", totalsum);
	return (0);
}
