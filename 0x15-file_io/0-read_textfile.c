#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * or 0 in case the file can not be opened or read
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read;
	ssize_t bytes_write;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0) /* if open the file fails*/
	{
		free(buf);
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		return (0);
	}
	buf[bytes_read] = '\0';
	bytes_write = write(STDOUT_FILENO, buf, bytes_read);
	free(buf);
	close(fd);
	return (bytes_write);
}
