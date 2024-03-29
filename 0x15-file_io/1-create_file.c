#include <string.h>
#include "main.h"

/**
 * create_file - creates file with content
 * @filename: name of the file
 * @text_content: content to add to a file
 *
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
		w = write(o, text_content, strlen(text_content));

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
