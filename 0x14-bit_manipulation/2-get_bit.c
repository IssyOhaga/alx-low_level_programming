#include " main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to search for the bit
 * @index: index of bit to return
 *
 * Return: value of the bit at index
 * or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
