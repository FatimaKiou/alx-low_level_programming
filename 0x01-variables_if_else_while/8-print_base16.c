#include <stdio.h>
/**
 * main - the main function
 *
 * Return: all the time 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n >= 15 ; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		if (n >= 10)
		{
			putchar(n + 'a');
		}
	}
	putchar('\n');
	return (0);
}
