#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename input
 * @text_content: input
 * Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		i++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600)
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
