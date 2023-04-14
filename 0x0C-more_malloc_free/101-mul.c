#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - ascertain if there is a non-digit char
 * @s: string in question
 * Return: 1 if all are numbers, else 0
 */
int is_digit(char *s)
{
	int content;

	content = 0;

	while (s[content])
	{
		if (s[content] < '0' || s[content] > '9')
			return (0);
		content++;
	}
	return (1);
}

/**
 * _strlen - finds the length of a string
 * @s: string in question
 * Return: string length
 */
int _strlen(char *s)
{
	int content;

	content = 0;

	while (s[content] != '\0')
	{
		content++;
	}
	return (content);
}

/**
 * errors - exposes isses in the main function
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function to multiply two unsigned ints
 * @argc: amount of argumets in the array
 * @argv: arguments being passed
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *string1, *string2;
	int length1, length2, new_length, content, mod, num1, num2, *mul, a = 0;

	string1 = argv[1], string2 = argv[2];
	if (argc != 3 || !is_digit(string1) || !is_digit(string2))
		errors();
	length1 = _strlen(string1);
	length2 = _strlen(string2);
	new_length = length1 + length2 + 1;
	mul = malloc(sizeof(int) * new_length);
	if (!mul)
		return (1);
	for (content = 0; content <= length1 + length2; content++)
		mul[content] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = string1[length1] - '0';
		mod = 0;
		for (length2 = _strlen(string2) - 1; length2 >= 0; length2--)
		{
			num2 = string2[length2] - '0';
			mod += mul[length1 + length2 + 1] + (num1 * num2);
			mul[length1 + length2 + 1] = mod % 10;
			mod /= 10;
		}
		if (mod > 0)
			mul[length1 + length2 + 1] += mod;
	}

	for (content = 0; content < new_length - 1; content++)

	{
		if (mul[content])
			a = 1;
		if (a)
			_putchar(mul[content] + '0');
	}

	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);

}
