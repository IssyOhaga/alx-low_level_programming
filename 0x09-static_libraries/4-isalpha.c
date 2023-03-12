#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - check if in alphabet
 * @c: arguement as integer
 * Description: check if c is in alphabet
 * Return: void
 */

int _isalpha(int c);

/**
 * _isalpha - test if c is in alphabet
 * @c: the arguement to be tested, is integer
 * Description: tests is c is in alphabet
 * Return: void
 */

int _isalpha(int c)
{
	return isalpha(c);
}
