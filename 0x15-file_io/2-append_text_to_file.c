#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename input
 * @text_content: input
 * Return: Always 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		w = write(fd, text_content, i);

		if (w == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
