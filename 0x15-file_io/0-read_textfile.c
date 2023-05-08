#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: Text to be read
 * @letters: Number letters to be read.
 *
 * Return: The number of letters to be read. if it  fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int page;

	ssize_t red, not;

	char *buf;

	if (!filename)
		return (0);

	page = open(filename, O_RDONLY);

	if (page == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	red = read(page, buf, letters);

	not = write(STDOUT_FILENO, buf, red);

	close(page);

	free(buf);

	return (not);
}
