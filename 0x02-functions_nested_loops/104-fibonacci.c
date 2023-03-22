#include <stdio.h>

/**
 *main - prints the first 98 Fibonacci numbers
 *
 *Return: always 0
 */
int main(void)
{
	long int i;
	long int a = 1;
	long int b = 2;
	long int c;

	printf("%ld", a);
	printf(", %ld", b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
