#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * Description: Prints number 0 - 9, excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
