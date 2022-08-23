#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, wr, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;

		wr = write(file, text_content, i);
		if (wr == -1)
			return (-1);
	}

	close(file);
	return (1);
}
