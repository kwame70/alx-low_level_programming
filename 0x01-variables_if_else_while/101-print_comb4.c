#include <stdio.h>

/**
 * main - print combo of three digits
 *
 * Return: 0(success)
 */
int main(void)
{
        int i;
        int j;
	int k;

        for (i = 48; i <= 56; i++)
        {
                for (j = 49; j <= 57; j++)
                {
			for (k = 50; k < 58; k++)
			{
                        if (k > j && j > i)
                        {
                                putchar(i);
                                putchar(j);
				putchar(k);
                                if (i != 55 || j != 56)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
			}
                }
        }
        putchar('\n');

        return (0);
}
