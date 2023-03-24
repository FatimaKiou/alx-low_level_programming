#include "main.h"
/**
 * print_number - the function
 * @n: the int
 */
void print_number(int n)
{
	int m, x;
	
	if (n >= 0)
	{
		if (n >= 0 && n <= 9)
		{
			_putchar(n + '0');
		}
		else if (n >= 10 && n <= 99)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n >= 100 && n <= 999)
		{
			m = n % 100;
			_putchar((n / 100) + '0');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		else
		{
			m = n % 1000;
			x = m % 100;
			_putchar((n / 1000) + '0');
			_putchar((m / 100) + '0');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
	}
	else
	{
		n = -n;
		if (n >= 0 && n <= 9)
		{
			_putchar('-');
			_putchar(n + '0');
		}
		else
		{
			_putchar('-');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
}
