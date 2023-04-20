#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - unction that  returns the sum of all its parameters.
 * @n: interger to be summeb up
 * @...: mor eparameters in the function
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);
	for (k = 0; k < n; k++)

		sum = sum + va_arg(ap, int);
	va_end(ap);

	return (sum);
}
