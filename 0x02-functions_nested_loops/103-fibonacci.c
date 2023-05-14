#include <stdio.h>

/**
 * main - Even Liber Abbaci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int F0, F1, t, s;

	F0 = 1;
	F1 = 2;
	s = 0;

	for (i = 1; i <= 33; ++i)
	{
		if ((j < 4000000) && (F0 % 2 == 0))
		{
			s = s + F0;
		}
		t = F0 + F1;
		F0 = F1;
		F1 = t;
	}

	printf("%lu\n", s);

	return (0);
}

