#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to be appended to the end of the file.
 *
 * Return: 1 if the file exists, -1 if it fails or does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int page;
	int notes;
	int written;

	if (!filename)
		return (-1);

	page = open(filename, O_WRONLY | O_APPEND);

	if (page == -1)
		return (-1);

	if (text_content)
	{
		for (notes = 0; text_content[notes]; notes++)
			;

		written = write(page, text_content, notes);

		if (written == -1)
		{
			close(page);
			return (-1);
		}
	}

	close(page);

	return (1);
}

