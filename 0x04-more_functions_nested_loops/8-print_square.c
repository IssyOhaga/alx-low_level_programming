#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * Description: print a square of hash
 * @size: the square size
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (colum = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
