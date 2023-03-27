#include "main.h"
/**
 * rev_string - the function
 * @s: The string to be printed in reverse
 */
void rev_string(char *s)
{
	int i, j, len = 0;
	char c;

	while (s[len] != '\0')
		len++;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
