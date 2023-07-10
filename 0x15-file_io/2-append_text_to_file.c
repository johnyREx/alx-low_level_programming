#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to append to the file
 *
 * Return: 1 on Success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
