#include "function_pointers.h"
/**
 * int_index - index of the interger
 * @array: array of interger
 * @size: size of interger
 * @cmp:  searches for an integer.
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (k < size)
			{
				if (cmp(array[k]))
					return (k);

				k++;
			}
		}


	}

	return (-1);

}
