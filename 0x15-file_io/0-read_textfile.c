#include "main.h"

/**
 * read_textfile - reads contents of a file
 * @filename: name of file
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fp, wr;
	ssize_t characters_read;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	characters_read = read(fp, buff, letters);
	wr = write(STDOUT_FILENO, buff, characters_read);

	close(fp);
	free(buff);

	return (wr);
}
