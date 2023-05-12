#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to POSIX stdout
 *@filename: the name of the file to read.
 *@letters: The maximum number of bytes to read from the file.
 *
 *Return: number of bytes read and printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text_buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, 0_RDONLY);
	if (file_descriptor == -1)
		return (0);
	text_buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, text_buffer, letters);
	bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);

	free(text_buffer);
	close(file_descriptor);

	return (bytes_written);
