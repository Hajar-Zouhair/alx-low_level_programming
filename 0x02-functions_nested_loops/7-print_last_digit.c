#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: Always 0 (Success)
 *
 * @n : number
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r >= 0)
	{
		_putchar(r + 48);
		return (r);
	}
	else
	{
		_putchar(-r + 48);
		return (-r);
	}
}
