#include "main.h"
/**
 * swap_int - function to swap between two int
 * @a: the first int
 * @b: the second int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
