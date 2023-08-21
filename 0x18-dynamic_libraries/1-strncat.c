#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strncat- function that concatenates two strings.
 * it will use at most n bytes from src
 * @dest: The string to be append
 * @src: The string to be append
 * @n: The number of bytes from scr to dest
 * Return: A pointer to the returning string
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
