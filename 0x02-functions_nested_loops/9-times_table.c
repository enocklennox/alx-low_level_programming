#include "main.h"

/**
 *times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	int product = i * 9;

	if (product >= 10)
	{
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
	}
	else
	{
		_putchar(product + '0');
	}
		_putchar('\n');
	}
}
