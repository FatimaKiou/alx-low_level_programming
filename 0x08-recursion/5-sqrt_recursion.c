#include "main.h"
/**
 * sqrt_helper - recursively finds the natural square root of a number
 * @n: the number to calculate the square root of
 * @i: the current candidate for the square root
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}
