#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index of bit to set
 *
 * Return: 1 if it worked,, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

*n |= (1 << index);

return (1);

}
