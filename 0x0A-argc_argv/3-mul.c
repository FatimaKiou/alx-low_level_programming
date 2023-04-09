#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: number of arguments
 * @argv: arguments supplied
 * Return: 1 if < two arg var supplied else 0.
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
