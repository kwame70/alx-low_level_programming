#include "main.h"

/**
 *print_alphabet_x10 - print alphabets x10
 *
 * Return: 0(success)
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');


	}
}
