#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of a file
 * @text_content: content to write
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_APPEND | O_WRONLY);

	if (text_contents != NULL)
		w = write(o, text_content, strlen(text_content));

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
