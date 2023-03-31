#inlcude "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: string
 * @n: interger
 * Return: dest
 * Wrighten By Derullah
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
