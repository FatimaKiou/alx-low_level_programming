#include <stdio.h>
/**
 * main - the main function
 *
 * Return: all the time 0
 */
int main(void)
{
	char c;

	/* Lowercase alphabet */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	/* Uppercase alphabet */
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
