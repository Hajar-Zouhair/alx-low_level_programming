#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * Return: Always 0 (Success)
 *
 * @n : nbr
 */

void print_times_table(int n)
{
	int k;
	int i;
	int j;
	int q;
	int r;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (i == 0)
			{
				if (j < n)
				{
					_putchar(48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(48);
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if(k < 100)
						_putchar(' ');
				}
				if (k <= 9)
				{
					if ((j <= n) && (j != 0))
						_putchar(' ');
					_putchar(k + 48);
				}
				else
				{
					if (k < 100)
					{
						q = (int) (k / 10);
						r = k % 10;
						_putchar(q + 48);
						_putchar(r + 48);
					}
					else
					{
						q = (int) (k / 100);
						_putchar(q + 48);
						r = k % 100;
						q = (int) (r / 10);
						_putchar(q + 48);
						r = q % 10;
						_putchar(r + 48);
					}
				}
			}
		}
		_putchar('\n');
	}
}
