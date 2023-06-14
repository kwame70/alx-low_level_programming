#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of argument passed into it
 *
 * @argc: number of argument passed
 * @argv: array of strings passed
 *
 * return: nothing.
 */

int main(int argc, char **argv)
{

	(void) argv;
	printf("%d\n", argc - 1);



	return (0);
}

