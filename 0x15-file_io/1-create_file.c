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
<<<<<<< HEAD:0x15-file_io/1-create_file.c
		text_content = "";

	for (i = 0; text_content[i]; i++)
=======
	{
		for (i = 0; text_content[i]; i++)
>>>>>>> 1-create_file.c:1-create_file.c
		i++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	rwr = write(fd, text_content, nletters);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
