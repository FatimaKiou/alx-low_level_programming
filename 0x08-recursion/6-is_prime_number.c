/**
 * check_prime - Checks if a number is prime recursively.
 *
 * @n: The number to check.
 * @i: The divisor to try.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is a prime number.
 *
 * @n: The number to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
