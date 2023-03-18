#include <stdio.h>
/**
 * main - the main function
 *
 * Return: all the time 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e')
		{
			if (c != 'q')
			{
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}
