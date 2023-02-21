#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the time table of the input,
 * starting with 0.
 * @n: The value of the items to be printed
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		prod = i * j;
		printf("%4d", prod);
	}
	printf("\n");
	}
}
