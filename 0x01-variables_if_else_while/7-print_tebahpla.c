#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main -  print the last digit of the number stored in the variable n
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}