#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file with the specified name and content
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, text_len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	text_len = 0;
	while (text_content[text_len] != '\0')
		text_len++;


	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1 || bytes_written != text_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

