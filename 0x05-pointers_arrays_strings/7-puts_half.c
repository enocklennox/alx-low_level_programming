#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: string to be printed
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i])
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

_putchar('\n');
}
