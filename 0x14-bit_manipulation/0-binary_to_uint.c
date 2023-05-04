#ifndef BINARY_H
#define BINARY_H
#include <ctype.h>
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned integer
 * @b: char string
 *
 * Return: converted number, or 0 if b has chars that are not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
	if (!isdigit(*b) || (*b != '0' && *b != '1'))
	return (0);

	num <<= 1;
	num += (*b++ - '0');
}
return (num);
}

#endif
