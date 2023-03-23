#include "main.h"
/**
 * print_square - the function
 * @size: the size
 */
void print_square(int size)
{
	if (size > 0)
	{
		int n, m;

		for (n = 0 ; n < size ; n++)
		{
			for (m = 0 ; m < size ; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
