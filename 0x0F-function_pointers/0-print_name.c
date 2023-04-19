#include "main.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name of the user
 * @name: name to be printed
 * @f: character
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
		f(name);


}
