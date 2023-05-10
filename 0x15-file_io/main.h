#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int _putchar(char character);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int cp(const char *file_from, const char *file_to);

#endif