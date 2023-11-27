#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename input
 * @letters: number of letters it should read and print
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(fd);
	free(buff);

	return (w);
}
