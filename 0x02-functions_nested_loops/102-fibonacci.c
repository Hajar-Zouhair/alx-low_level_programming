#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int F0 = 1;
	long int F1 = 2;
	long int s;

	printf("%ld, %ld", F0, F1);
	for (i = 0; i <= 47; i++)
	{
		s = F1 + F0;
		printf(", %ld", s);
		F0 = F1;
		F1 = s;
	}
	printf("\n");

	return (0);
}

