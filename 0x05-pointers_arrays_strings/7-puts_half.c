#include "main.h"
/**
 * puts_half - prints the second half of string
 * @str: string
 */
void puts_half(char *str)
{
	int c = 0, i;

	while (*(str + c) != '\0')
	{
		c++;
	}
	for (i = 0 ; i < c ; i++)
	{
		if (i > (c - 1) / 2)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
