#include <stdio.h>
/**
 * main - the main function
 *
 * Return: all the time 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
