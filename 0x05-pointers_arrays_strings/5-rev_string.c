#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (s[i])
	{
		str[i] = s[i];
		i++;
	}

	i--;

	while (i >= 0)

	{
		s[j] = str[i];
		j++;
		i--;
	}
}
