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
	int F0 = 0;
	int F1 = 1;
	int s;

	for (i = 0; i <= 49; i++)
	{
		s = F1 + F0;
		printf("%d", s);
		F0 = F1;
		F1 = s;
		if (i == 49) printf("\n");
		else printf(", ");
	}

	return (0);
}

