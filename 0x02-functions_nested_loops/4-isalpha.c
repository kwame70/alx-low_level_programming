#include "main.h"

/**
 * _isalpha - checks if alphabet is capital
 *
 * @c: the character to be checked
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
