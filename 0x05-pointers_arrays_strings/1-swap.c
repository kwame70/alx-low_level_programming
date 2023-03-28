#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: integer input
 * @b: integer input
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
