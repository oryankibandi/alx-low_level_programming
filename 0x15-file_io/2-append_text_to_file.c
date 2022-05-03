#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: name of file
 * @text_content: text to append
 * Return:  1 on Success, -1 on fail
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		rwr = write(fd, text_content, n);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
