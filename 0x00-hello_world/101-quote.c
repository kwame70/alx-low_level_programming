#include <stdio.h>

/**
 * main - printing with fprintf
 *
 * Return: 1
 */
int main(void)
{
	char outp[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stdout, "%s", outp);

	return (1);
}
