#include "main.h"
/**
 * leet - the function
 * @str: the string
 * Return: the result
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char s[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (str[i] == s[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
