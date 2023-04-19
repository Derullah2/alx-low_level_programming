#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter
 * @array: array of elements
 * @size: size of array
 * @action: action to be taken
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int j = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
		
			action(array[j]);
			j++;
		}
	
	}








}
