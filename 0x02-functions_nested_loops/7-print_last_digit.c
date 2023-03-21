#include "main.h"
/**
 * print_last_digit - print the last digit of int
 * @n: the int to chek
 * Return: returns the results
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
