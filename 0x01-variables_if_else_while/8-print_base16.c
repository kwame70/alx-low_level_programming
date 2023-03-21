#include <stdio.h>

/**
 * main - print hex numbers
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
