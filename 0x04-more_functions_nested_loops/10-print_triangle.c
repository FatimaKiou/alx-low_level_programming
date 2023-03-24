#include "main.h"
/**
 * print_triangle - the function
 * @size: the input
 */
void print_triangle(int size)
{
	int X, i, j;

	X = 0;
	while (size > X)
	{
		i = size - 1 - X;
		j = X + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		X++;
	}

	if (size <= 0)
		_putchar('\n');
}
