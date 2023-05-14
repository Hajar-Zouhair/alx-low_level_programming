#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int k;
	int i;
	int j;
	int q;
	int r;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k <= 9)
			{
				if ((j =< 9) && (j != 0))
					_putchar(' ');
				_putchar(k + 48);
			}
			else
			{
				q = (int) (k / 10);
				r = k % 10;
				_putchar(q + 48);
				_putchar(r + 48);
			}
		}
		_putchar('\n');
	}
}
