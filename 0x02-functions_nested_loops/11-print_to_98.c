#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 * @n : int nbr
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", i);
}
