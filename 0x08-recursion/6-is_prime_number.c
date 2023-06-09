#include "main.h"
#include <stdio.h>
/**
 *check_prime_number - checks if a number is prime
 *@n: the number to check
 *
 *Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 *check_prime number - helper function for is_prime_number
 *@n: integer to check
 *@i: integer to use as divisor
 *
 *Return: 1 if n is prime, otherwise 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
