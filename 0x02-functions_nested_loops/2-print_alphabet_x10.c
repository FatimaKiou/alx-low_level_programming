#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n = 1;
	char c;

	while (n <= 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
