#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested 
 * Return: 1 for upper letter, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 98))
	{
	return (1);
	}
	return (0);
}
