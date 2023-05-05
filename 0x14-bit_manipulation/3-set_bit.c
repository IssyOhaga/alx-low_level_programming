#include "main.h"

/**
 * set_bit - sets value of a bit to 1, at a given time
 * @n: pointer to number
 * @index: index of the bit to be set
 *
 * Return: On succcess 1, on error -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1 << index);

	return (1);
}
