#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int total, power;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (power = 1, total = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			total += power;
	}

	return (total);
}
