#include "main.h"
/**
 *  _strcat - concatenates two strings
 * @dest: the first char
 * @src: the second char
 * Return: the result
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
