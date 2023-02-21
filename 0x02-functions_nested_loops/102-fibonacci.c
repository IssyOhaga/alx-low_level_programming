#include <stdio.h>

int main()
{
	int i, n = 50;
	long int fib1 = 1, fib2 = 2, fib;

	printf("'%ld, %ld", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		fib = fib1 + fib2;
		printf(", %ld", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");

	return 0;
}
