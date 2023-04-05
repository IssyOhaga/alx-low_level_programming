#include "lists.h"

/**
 * _putchar - prints character
 * @character: charater to print
 * Return: 1. On success, -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
