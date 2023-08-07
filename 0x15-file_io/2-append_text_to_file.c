#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: text to append to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written = 0, len = 0;

if (filename == NULL)
return (access(filename, F_OK) == 0 ? 1 : -1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

while (text_content[len])
len++;

bytes_written = write(fd, text_content, len);
if (bytes_written == -1 || bytes_written != len)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
