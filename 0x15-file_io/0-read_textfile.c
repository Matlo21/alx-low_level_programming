#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file that's being read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buff);
		return (0);
	}

	rd = read(op, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(op);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		free(buff);
		close(op);
		return (0);
	}

	free(buff);
	close(op);
	return (wr);
}
