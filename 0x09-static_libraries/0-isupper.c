#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - function declaration
 * Description: check case of c
 * @c: character to test
 * Return: 1 for true and 0 for false
 */

int _isupper(int c);

/**
 * _isupper - function definition
 * Description: tests case of c
 * @c: character to test
 * Return: 1 if upper 0 if not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
