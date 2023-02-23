#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: number to be checked
 * Return: 1 for a character that will be a digit, 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
