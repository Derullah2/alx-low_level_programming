#include "main.h"
/**
 * _strpbrk - set bytes
 * @s: string
 * @accept:  locates the first occurrence in the string s
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
