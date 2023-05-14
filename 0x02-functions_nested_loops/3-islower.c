#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Return: Always 0 (Success)
 *
 * These functions check whether c, which must have the value
 * of an unsigned char or EOF
 *
 * @c : character in acii code
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
