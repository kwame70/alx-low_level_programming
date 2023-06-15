#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers followed by a new line
 *
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num_1 = 0;
	int num_2 = 0;

	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		printf("%d\n", num_1 * num_2);

	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);

}
