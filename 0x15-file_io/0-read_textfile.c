#include "main.h"

/**
 * read_textfile - reads text and prints to STDOUT
 * @filename: file name pointer
 * @letters: number of letters printed
 *
 * Return: 0 if file name is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, n_read;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (buf == null)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}

n_read = read(fd, buf, letters);
if (n_read == -1)
{
free(buf);
close(fd);
return (0);
}
