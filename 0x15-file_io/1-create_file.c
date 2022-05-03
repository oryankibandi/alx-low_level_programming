#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content to write to file
 * Return: Success:1 Fail:-1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int count = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	if (text_content != NULL)
		while (text_content[count] != '\0')
			count++;

		write(fp, text_content, count);

	close(fp);

	return (1);
}
