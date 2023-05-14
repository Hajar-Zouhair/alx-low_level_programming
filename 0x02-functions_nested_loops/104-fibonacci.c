#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always (0) (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int p = 1;
	unsigned long int n = 2;
	unsigned long int l = 1000000000;
	unsigned long int p1, p2, n1, n2;

	printf("%lu", p);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", n);
		n += p;
		p = n - p;
	}
	p1 = (p / l);
	p2 = (p % l);
	n1 = (n / l);
	n2 = (n % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n1 + (n2 / l));
		printf("%lu", n2 % l);
		n1 = n1 + p1;
		p1 = n1 - p1;
		n2 = n2 + p2;
		p2 = n2 - p2;
	}
	printf("\n");
	return (0);
}
