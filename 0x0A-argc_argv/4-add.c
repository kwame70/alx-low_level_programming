#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	unsigned int  sum = 0;
	char *l;


	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			l = argv[i];
			for (j = 0; j < strlen(l); j++)
			{
				if (l[j] < 48 || l[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(l);
			l++;
		}

		printf("%d\n", sum);

	}
	else
	{	printf("0\n");

	}
	return (0);
}
