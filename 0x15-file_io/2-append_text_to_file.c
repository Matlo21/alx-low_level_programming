#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure

 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i]; i++)
	{}

	wr = write(file, text_content, i);
	if (wr == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
