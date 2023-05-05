#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * from one number to the next
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m;
unsigned int  count = 0;

while (flip)
{
count += flip & 1;
flip >>= 1;
}

return (count);
}
