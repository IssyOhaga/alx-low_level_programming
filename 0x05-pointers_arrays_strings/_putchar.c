#include <unistd.h>

/**
 * _putchar - prints or writes character
 * @character: the character to print
 * Return: 1, Success, -1 error
 */

int _putchar(char character)
{
	return(write(1, &character, 1));
}
