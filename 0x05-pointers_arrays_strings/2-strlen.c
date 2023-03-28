#include "main.h"

/**
 * _strlen - print the number of strings
 *
 * @s: the string to be printed
 *
 * Return: the length of @s
 */
int  _strlen(char *s)
{
	int  length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
