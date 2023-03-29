#include "main.h"
/**
 * cap_string - the function
 * @str: the char
 * Return: the result
 */
char *cap_string(char *str)
{
	int i = 0;
	int letter = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			letter = 1;
		}
		else if (letter && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			letter = 0;
		}
		else
		{
			letter = 0;
		}
		i++;
	}
	return (str);
}
