#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename input
 * @letters: number of letters it should read and print
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int dd;
	ssize_t r;
	ssize_t w;
	char *buff;

	if (filename == NULL)
		return (0);

	dd = open(filename, O_RDONLY);

	if (dd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	r = read(dd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(dd);
	free(buff);

	return (w);
}
