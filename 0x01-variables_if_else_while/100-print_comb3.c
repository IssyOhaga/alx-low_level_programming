#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	purchar('\n');

	return (0);
}
