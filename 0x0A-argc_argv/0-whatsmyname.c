#include <stdio.h>
#include <stdlib.h>
/**
 * main -main entry
 * @argc: arguement count
 * @argv: arguement vector
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	printf("%d\n", argc);
	return (EXIT_SUCCESS);
}
