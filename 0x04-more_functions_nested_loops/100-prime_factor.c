#include <stdio.h>
/**
 * main - the main function
 * Return: return 0 always
 */
int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			n /= i;
			printf("%ld\n", i);
		} else
		{
			i++;
		}
	}
	return (0);
}
