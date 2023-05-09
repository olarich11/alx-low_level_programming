#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file- program that copies the content of a file to another file.
 * @file_from: The file to be stored to another file.
 * @file_to: File to be stored.
 * @argv: arguments supplied to the program
 * Return: The new allocated file
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

		exit(99);
	}
}
/**
 * main - Copied code of contecnt of files to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: Array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;

	ssize_t notes, nwr;

	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");

		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	error_file(file_from, file_to, argv);

	notes = 1024;
	while (notes == 1024)
	{
		notes = read(file_from, buf, 1024);
		if (notes == -1)
			error_file(-1, 0, argv);

		nwr = write(file_to, buf, notes);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
		if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
