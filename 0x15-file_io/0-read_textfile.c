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
int fd;
ssize_t nrd, nwr;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters);
if (!buf)
return (0);

nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fd);

free(buf);

return (nwr);

}
