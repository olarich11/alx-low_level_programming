#include "main.h"
#include <stdlib.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written in the file.
 *
 * Return: 1 for success, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int page;
	int notes;
	int writter;

	if (!filename)
		return (-1);

	page = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (page == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (notes = 0; text_content[notes]; notes++)
		;

	writter = write(page, text_content, notes);

	if (writter == -1)
		return (-1);

	close(page);

	return (1);
}

