#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * worl_len - words line
 * @str: string to be counted
 * Return: index of the last words
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);

}

/**
 * count_words - counts wowrds on line
 * @str: the string to search
 * Return: number of wrds contained in str
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; (str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index = index + word_len(str + index);
		}

	}


}

/**
 * strtow - splits a string into 2 words
 * @str: string to be split
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{

	char **string;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (words +1));
	if (string == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str(index) == ' ')
			index++;

		letters = word_len(*str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (string[w] == NULL)
		{
		
			for (; w >= 0; w--)
				free(strings[w]);

			free(string);
			return (NULL);		
		}
		for (l = 0; l < letters; l++)
			string[w][l] = str[index++];

		string[w][l] = '\0';
	}
	strings[w] = NULL;

	return (string);


}
