#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 all the time
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (int) sizeof(char));
	printf("Size of a int: %ld byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", (int) sizeof(float));
	return (0);
}
