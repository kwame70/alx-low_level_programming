#include "main.h"

/**
 * factorial - factorial of a given number
 *
 * @n: number to find the factorial
 *
 * Return: -1 if n < 0, factorial of n if >0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1)); 
}
