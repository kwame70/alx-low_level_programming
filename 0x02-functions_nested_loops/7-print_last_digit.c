#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: number from which last digit will be printed
 *
 * Return: last value of @n
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;

	if (res < 0)
	{
		res = res * -1;
	}
	_putchar(res + '0');
	return (res);

}
