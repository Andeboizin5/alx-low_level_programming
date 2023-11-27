#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename input
 * @letters: number of letters it should read and print
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
<<<<<<< HEAD:0x15-file_oi/0-read_textfile.c
	int fd;
	ssize_t r;
	ssize_t w;
=======
	ssize_t fd;
	ssize_t nrd;
	ssize_t nwr;
>>>>>>> 0-read_textfile.c:0-read_textfile.c
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	free(buf);
	close(fd);
	return (nwr);
}
