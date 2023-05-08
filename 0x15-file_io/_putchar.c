#include "main.h"

/**
 * _putchar - prints a character
 * @character: character to print
 *
 * Return: On success 1, on error -1
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
