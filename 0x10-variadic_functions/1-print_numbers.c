#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  prints numbers
 * @separator: separates the numbers by a string
 * @n: intergerser to be printed and separeted
 * @...: more parameter or functions
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int numbers;

	va_start(nums, n);
	for (numbers = 0; numbers < n; numbers++)
	{
		printf("%d", va_arg(nums, int));
		if (numbers != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);

}
