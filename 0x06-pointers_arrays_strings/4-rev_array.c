#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, m;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		m = a[i];
		a[i] = a[j];
		a[j] = m;
	}
}
