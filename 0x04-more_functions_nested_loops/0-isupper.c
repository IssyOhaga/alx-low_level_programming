#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or not
 * @c: character to be tested 
 * Return: 1 for upper letter, 0 for anything else
 */

int _isupper(int c)

{

	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	return (0);
}