#include "main.h"
#include <stdlib.h>
/*
 *read_textfile - reads a text file and prints it to POSIX stdout
 *@filename: the name of the file to read.
 *letters:  allocate memory for buffer
 *
 *Return  - number of letters read or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	char *buf = malloc(letters * sizeof(char));

	if (!buf)
	{
		close(fd);
		return (0);
	}
	ssize_t bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (bytes_written);
}

