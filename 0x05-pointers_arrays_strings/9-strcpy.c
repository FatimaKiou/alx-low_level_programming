#include "main.h"
/**
 * _strcpy - the function
 * @dest: the first char
 * @src: the second char
 * Return: return the result
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
