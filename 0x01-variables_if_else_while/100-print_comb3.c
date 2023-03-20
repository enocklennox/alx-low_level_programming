#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		i %= 10;
		if (j < i)
		{
			putchar(j + '0');
			putchar(i + '0');
			if (i != 9 || j != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
