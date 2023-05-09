#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void cpf(char *file_from, char *file_to);

void error(int e, char *filename);

/**
 * main - main entry
 * @ac: count the arguments in the file
 * @av: check the argument values in the file
 * Return: 0 else exits with error code 97.
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpf(av[1], av[2]);
	return (0);
}

/**
 * cpf - copies the content of a file to another file.
 * @file_from: we copy from one filre to another
 * @file_to: we paste content here
 * Return: 1 on success, -1 on failure.
 */
void cpf(char *file_from, char *file_to)
{
	int fdread, nread, fdwrite, nwrite;
	int cflag = 1;
	char buf[1024];

	fdread = open(file_from, O_RDONLY);
	if (fdread < 0)
		error(98, file_from);

	fdwrite = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdwrite < 0)
	{
		close(fdread);
		error(99, file_to);
	}
	do {

		nread = read(fdread, buf, 1024);
		if (nread < 0)
			error(98, file_from);

		nwrite = write(fdwrite, buf, nread);
		if (nwrite < nread)
			error(99, file_to);
	} while (nwrite == 1024);
	if (close(fdread) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdread);
		cflag = 0;
	}
	if (close(fdwrite) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdwrite);
		cflag = 0;
	}
	if (!cflag)
		exit(100);
}

/**
 * error - Read file in the program
 * @e: Error number
 * @filename: File name
 */
void error(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
