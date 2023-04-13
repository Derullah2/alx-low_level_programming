#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void add_nums(char *final_prod, char *next_prod, int next_len);
void get_prod(char *prod, char *mult, int digit, int zeroes);

/**
 * find_len - finds the lenth of the string to check
 * @str: string to be checked
 * Return: lenth of string
 */
int find_len(char *str)
{

	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * create_xarray - crates arrays
 * @size: size of the array
 */
