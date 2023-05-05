#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int byte;

if (index > 63)
{
return (-1);
}

byte = 1 << index;

if (*n & byte)
{
*n ^= byte;
}

return (1);
}
