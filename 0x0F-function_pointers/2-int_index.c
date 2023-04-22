#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
