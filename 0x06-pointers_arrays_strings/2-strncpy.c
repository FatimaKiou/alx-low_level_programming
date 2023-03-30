#include "main.h"
/**
 * _strncpy - the function
 * @dest: dest
 * @src: src
 * @n: maximum number of characters to copy
 * Return: the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
