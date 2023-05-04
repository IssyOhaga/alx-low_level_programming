#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal value
 * @n: number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
int i, num0nes = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
_putchar('1');
num0nes++;
}
else if (num0nes)
_putchar('0');
}
if (!num0nes)
}
