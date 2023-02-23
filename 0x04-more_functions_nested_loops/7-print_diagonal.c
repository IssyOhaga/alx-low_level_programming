#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * Description; print a slash n times
 * @n: number of slashes
 * Return: void
 */

void print_diagonal(int n)
{
	int slash;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
