#include "main.h"

/**
 *print_number - prints an integer in the terminal
 *@n: integer to print
 */
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / i > 9)
		i *= 10;

	while (i > 0)
	{
		_putchar((n / i) % 10 + '0');
		i /= 10;
	}
}
