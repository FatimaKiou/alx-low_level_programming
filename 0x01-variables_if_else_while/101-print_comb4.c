#include <stdio.h>
/**
 * main - the main function
 *
 * Return: all the time 0
 */
int main(void)
{
	int n;
	int m;
	int q;

	for (n = 0 ; n < 8 ; n++)
	{
		for (m = n + 1 ; m < 9 ; m++)
		{
			for (q = m + 1 ; q < 10 ; q++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(q + '0');
				if (n == 7 && m == 8 && q == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
