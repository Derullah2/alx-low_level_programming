#include "main.h"
/**
 * _strcmp -  compares two strings.
 * @s1: string 0ne
 * @s2: string two
 * Return: s1[i] - s2[i]
 * wrighten by Derullah
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
