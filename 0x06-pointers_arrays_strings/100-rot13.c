#include "main.h"

/**
 *rot13 - encodes a string using rot13
 *@s: string to encode
 *
 *Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*p)
	{
		for (i = 0; i < 52; i++)
		{
			if (*p == rot13_array[i][0])
			{
				*p = rot13_array[i][1];
				break;
			}
		}
		p++;
	}

	return (s);
}
