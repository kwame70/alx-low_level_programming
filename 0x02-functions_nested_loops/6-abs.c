#include "main.h"

/**
 * _abs - check absolute value
 *
 * @n: number to check
 *
 * Return: @n if >0,0 if @n == 0,
 * @n if < 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
