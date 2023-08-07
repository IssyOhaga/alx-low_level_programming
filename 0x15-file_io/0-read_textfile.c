#include "main.h"

/**
 * read_textfile - reads a tect file and prints it to the POSIX standard output
 * @filename: pointer to name of file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters, read and printed. 0 if file cannot be opened
 * if filename is NULL, or if write fails or does not write the expected bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, n_read;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (buf == NULL)
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

buf[n_read] = '\0';

if (write(STDOUT_FILENO, buf, n_read) != n_read)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);

return (n_read);
}
