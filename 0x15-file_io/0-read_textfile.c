#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - function that reads a text file in a file
 * @filname: the file name to be read by the programg and printed out
 * @letters: letters present in the file
 * Return: NULL or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)

/* this line of code checks wether the file exist and if it does not exist it creates it and sees if its NULLin char (-1) then returns 0 */
{
	int filedestination, contread, contwrite;
	char *buff_str;

	if (filename == NULL)
		return (0);

	filedestination = open(filename, O_RDONLY);

	if (filedestination == -1)
		return (0);

	buff_str = malloc(sizeof(char) * letters);

	if (buff_str == NULL)

		return (0);

	contread = read(filedestination, buff_str, letters);
	if (contread == -1)

	{
		free(buff_str);
		return (0);

	}
/*words manipilation beegings in this point that is Read and Wright*/
	contwrite = write(STDOUT_FILENO, buff_str, contread);
	if (contwrite == -1 || contread != contwrite)
	{
		free(buff_str);
		return (0);
	}

	free(buff_str);
	close(filedestination);
	return (contwrite);
}
