#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - unction that creates a file in the program
 * @filename: the file we shall be working with in the program
 * @text_content: the content ofn the text in the file
 * Return: -1 or NULL
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int filedestination, contwrite, countwords;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{

		filedestination = open(filename, O_WRONLY | O_APPEND);
		if (filedestination == -1)

			return (-1);
		countwords = 0;

		while (*(text_content + countwords) != '\0')
			countwords++;
		contwrite = write(filedestination, text_content, countwords);

		if (contwrite == -1)
		{
			close(filedestination);
			write(STDOUT_FILENO, "Fails\n", 6);
			return (-1);
		}
	}
	close(filedestination);
	return (1);
}
