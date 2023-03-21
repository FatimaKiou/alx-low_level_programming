#include "main.h"
/**
 * print_sign - to print sign
 * @n: the character to be checked
 * Return: return the result
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
