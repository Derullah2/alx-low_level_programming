#include "main.h"
/**
 * _strchr - string character
 * @s; character
 * @c: characterc 2
 * Return: Null
 */
char *_strchr(char *s, char c)
{

	int i =0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[1]);
	}
	return (0);


}
