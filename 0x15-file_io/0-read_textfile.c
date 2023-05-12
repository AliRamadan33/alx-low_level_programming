#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print,
 * or 0 if the file can not be opened or read, or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FD;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	FD = open(filename, O_RDONLY);

	if (FD == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(FD, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(FD);

	free(buf);

	return (nwr);
}
