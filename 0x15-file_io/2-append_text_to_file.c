#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to end of a file
 *
 * This function opens a file with write-only and append mode,
 * and appends the given text to the end of the file. If the file
 * does not exist,
 *
 * @filename: name of file to append to
 * @text_content - text to append to the file
 *
 * Return: 1 on succcess, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
int fd, nbytes = 0;

if (filename == NULL)
return (-1);
if (text_content)
{
while (text_content[nbytes])
nbytes++;
}

fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
if (fd == -1)
return (-1);
bytes_written = write(fd, text_content, nbytes);
if (bytes_written == -1)
{
close(fd);
return (-1)
}
close(fd);
return (1);
}
