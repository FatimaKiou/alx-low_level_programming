#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter and Returns 0 otherwise
 *@c:the character to be checked
 * Return: return in integer
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
