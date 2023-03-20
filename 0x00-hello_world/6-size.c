#include <stdio.h>

/**
 * main - print sizes of datatypes
 *
 * Return: 0(success)
 */
int main (void)
{
	char i;
	int n;
	long int l_int;
	long long int ll_int;
	float f;
	printf("Size of a char: %d byte(s)\n", sizeof(i));
	printf("Size of an int: %d byte(s)\n", sizeof(n));
	printf("Size of a long int: %d byte(s)\n", sizeof(l_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(ll_int));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return 0;
}
