#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main -  prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++){
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
