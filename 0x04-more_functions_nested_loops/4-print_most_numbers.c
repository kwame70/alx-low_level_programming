#include "main.h"

/**
 * print_most_numbers - print 0 - 9 without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
		{
			i++;
			/*continue;*/
		}
		else if (i == 52)
		{
			i++;
			/*continue;*/
		}
		_putchar(i);
	}
	_putchar('\n');
}
