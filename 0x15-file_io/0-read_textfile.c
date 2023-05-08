#include "main.h"
/**
 * read_textfile - text read here and printed to the POSIX standard output
 * @filename: file name
 * @letters: indicates how many letters to be read and printed
 *
 * Return: The actual number of letters read and printed, or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[n_read] = '\0';
	if (write(STDOUT_FILENO, buffer, n_read) == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_read);
}
