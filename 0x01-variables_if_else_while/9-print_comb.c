#include <stdio.h>
/**
 * main - the main function
 *
 * Return: all the time 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		if (n != 9)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
		if (n == 9)
		{
			putchar(n + '0');
		}
	}
	putchar('\n');
	return (0);
}
