#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime number of the number 612852475143
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	long i;
	long max;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			max = number / i;
		}
	}
	printf("%ld\n", max);

	return (0);
}
