#include <stdio.h>

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion(n / 2) * 2 == n ? _sqrt_recursion(n / 2) : -1);
}
