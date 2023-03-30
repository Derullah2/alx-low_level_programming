#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the choosen string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{

	int dlen = 0, i;
	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
	
		dest[dlen] = src[i];
		dlen++
	}
	dest[dlen] = src[i];
	return [dest];
