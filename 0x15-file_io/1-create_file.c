#include "main.h"
/**
 * _strlen -  returns the length of a string
 * Return: length
 * @s: pointer to the string
 **/
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{}
	return (length);
}
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int size, fd, length;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		length = _strlen(text_content);
		size = write(fd, text_content, length);
		if (size < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
