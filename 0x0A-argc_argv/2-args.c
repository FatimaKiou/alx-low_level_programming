#include <stdio.h>
/**
 * main - the main function
 * @argc: argument numbers
 * @argv: arguments passed
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
