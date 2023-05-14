#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * Return: Always 0 (Success)
 *
 * These functions check whether c,
 * which must have the value of an unsigned char or EOF,
 * falls into a certain  character  class according to
 * the specified locale.
 *
 * @c : character in acii code
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	return (0);
}
