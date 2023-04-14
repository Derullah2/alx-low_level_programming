#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: created should contain all the values from min
 * @max: maxximum use
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *pointer_new_array;
	int content, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	pointer_new_array = malloc(sizeof(int) * length);

	if (pointer_new_array == NULL)
		return (NULL);

	for (content = 0; min <= max; content++)
		pointer_new_array[content] = min++;

	return (pointer_new_array);
}
