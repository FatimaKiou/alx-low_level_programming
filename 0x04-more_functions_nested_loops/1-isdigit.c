#include "main.h"
/**
 * _isdigit - the function
 * @c: the value
 * Return: return the result
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
