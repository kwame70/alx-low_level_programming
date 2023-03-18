#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine the last digits of random numbers
 *
 * Description: printing last digits of random number
 * if it's greater than 5, less than 6 and 0
 *
 * Return: 0 (successfully executed)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n %10) > 5)
	{
		printf("Last digit of %d is %d and is greater than five\n", n, n %10);
	}
	else if ((n %10) <6 && (n %10) !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n %10);

	}
	else if ((n %10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n %10);
	}
	return (0);
}
