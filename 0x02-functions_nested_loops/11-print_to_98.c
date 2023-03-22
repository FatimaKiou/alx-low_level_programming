#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - the function
 * @n: the input character
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	printf("98\n");
}
