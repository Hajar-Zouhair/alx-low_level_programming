#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - prints all possible combinations of two two-digit numbers.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int t;
	int z;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (t = 48; t <= 57; t++)
			{
				for (z = 48; z <= 57; z++)
				{
					if ((i + j < t + z) && (i <= t))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(t);
						putchar(z);
						if ((i != 57) || (j != 56))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
