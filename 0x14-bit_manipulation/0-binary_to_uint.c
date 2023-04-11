#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: converted number
 */

unsigned in binary_to_unit(const char *b)
{
	int a;
	unsigned int decimalValue = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimalValue = 2 * decimalValue + (b[a] - '0');
	}
	return (decimalValue);
}
