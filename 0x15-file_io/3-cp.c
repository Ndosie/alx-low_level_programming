#include "main.h"

/**
 * close_file - closes the opened file descriptors
 * @fd: file descriptor to close
 */
void close_file(ssize_t fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld", fd);
		exit(100);
	}
}

/**
 * main - copies contents from one file to another file
 * @argc: arguments count
 * @argv: array pointer to arguments
 *
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	ssize_t o_f, o_t, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	o_f = open(argv[1], O_RDONLY);
	r = read(o_f, buffer, 1024);
	o_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (o_f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(o_t, buffer, r);
		if (o_t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(o_f, buffer, 1024);
		o_t = open(argv[2], O_APPEND | O_WRONLY);
	} while (r > 0);

	free(buffer);
	close_file(o_f);
	close_file(o_t);
	return (1);
}
