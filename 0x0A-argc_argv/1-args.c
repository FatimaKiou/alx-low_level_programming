#include <stdio.h>
/**
 * main - the main function
 * @argc: number of arguments passed
 * @argv: arguments passed here
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
