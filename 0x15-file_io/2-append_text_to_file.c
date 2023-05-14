#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: Text content to append.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, pletters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		pletters = 0;
		while (text_content[nletters] != '\0')
			pletters++;

		rwr = write(fd, text_content, pletters);
		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

