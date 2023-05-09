#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - unction that creates a file in this program
 * @filename: the name of the file we are to work with
 * @text_content: the function that countes the text in the file
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int filedestination, counts;
	ssize_t contwrite;

	if (filename == NULL)
		return (-1);

	filedestination = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedestination == -1)/*exit*/
		return (-1);
	if (text_content != NULL)
	{
		counts = 0;

		while (*(text_content + counts) != '\0')
			counts++;
		contwrite = write(filedestination, text_content, counts);

		if (contwrite == -1)
		{
			write(1, "fails\n", 6);
			return (-1);
		}
	}
	close(filedestination);
	return (1);
}
