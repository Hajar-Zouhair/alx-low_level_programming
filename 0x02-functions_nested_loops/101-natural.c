#include <stdio.h>

/**
 *  natural numbers - computes and prints the sum of all the multiples
 *  of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int s = 0;
	int i = 1024;
	
	while (i > 2)
	{
		i--;
		if((i % 3 == 0) || (i % 5 == 0))
			s += i;
	}
	printf("%d\n", s);

	return (0);
}
