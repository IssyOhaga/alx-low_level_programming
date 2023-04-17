#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of file
 * @text_content: added content
 *
 * Return: 1 if file exists, -1 if file does not exist
 */

int append_text_to_file(const char *filename, char *text_content);
{
	int fd;
	int nletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
