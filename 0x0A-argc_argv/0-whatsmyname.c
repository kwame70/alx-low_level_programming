#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints program name
 *
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s",atoi(argv[i]));
	}
}
