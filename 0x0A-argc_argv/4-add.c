#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main function
 * @argc: number of arguments
 * @argv: arguments being passed
 * Return: return 0 or 1
 */
int main(int argc, char **argv)
{
	int a, b, add;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[a]);
	}
	printf("%i\n", add);
	return (0);
}
