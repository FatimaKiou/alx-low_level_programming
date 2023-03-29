#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest
 * @src: src
 * @n: amount of bytes used from src
 * Return: the result
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr)
	{
		ptr++;
	}
	while (i < n && *src != '\0')
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
