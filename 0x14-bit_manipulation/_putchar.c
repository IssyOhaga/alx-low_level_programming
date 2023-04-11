#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: character to be printed
 *
 * Return: 1, on success. -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
