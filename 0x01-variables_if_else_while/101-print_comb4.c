#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main -  prints all possible different combinations of three digits.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int t;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (t = 48; t <= 57; t++)
			{
				if ((i < j) && (j<t))
				{
					putchar(i);
					putchar(j);
					putchar(t);
					if ((i != 55) || (j != 56) || (t != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
