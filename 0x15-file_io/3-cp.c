#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: num of arguments
 * @argv: name of the arguments
 * Return: void
 **/
int main (int argc, char *argv[])
{
	char buf[1024];
	int file_from, file_to, bytes_read, create;
	ssize_t bytes_write;

	if (argc != 3)
	{
		dprintf("Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open (argv[1], O_RDONLY);
	if (file_from == -1)
	{
		return (98);
		dprintf("Error: Can't read from file %s\n", argv[1]);
	}
	bytes_read = read(file_from, buf, (size_t)buf);
	if (bytes_read == -1)
	{
		return (98);
		dprintf(file_from, "Error: Can't read from file %s\n", argv[1]);
	}
	buf[bytes_read] = '\0';
	file_to = open(argv[2], O_CREAT | O_WRONLY << 1 | O_TRUNC, );
	if (file_to == -1)
	{
		dprintf(file_to, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	if (buf[bytes_read])
	{
		bytes_write = write(file_to, buf[bytes_read], bytes_read);
		if (bytes_write < 0)
		{
			dprintf(file_to, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	close(file_from);
	close(file_to);
	if (close(file_from) < 0)
	{
		dprintf(file_from, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(file_to, "Error: Can't close fd %d", file_to);
		exit(100);
	}
}
