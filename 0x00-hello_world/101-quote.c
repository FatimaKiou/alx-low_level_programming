#include <unistd.h>

/**
 * main - main function
 * Return: all the time return 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
