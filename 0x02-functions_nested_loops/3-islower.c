#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c: character to be entered
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
