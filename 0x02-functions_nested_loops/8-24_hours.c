#include "main.h"

/**
 * jack_bauer - checks for lowercase character.
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i;
	int j;
	int t;
	int z;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (t = 0; t <= 5; t++)
			{
				for (z = 0; z <= 9; z++)
				{
					if ((i >= 2) && (j >= 4))
						break;
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(58);
					_putchar(t + 48);
					_putchar(z + 48);
					_putchar('\n');
				}
			}
		}
	}
}
