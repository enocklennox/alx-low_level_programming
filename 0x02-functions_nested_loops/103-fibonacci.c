#include <stdio.h>

/**
 *main - finds and prints the sum of even-valued Fibonacci terms
 *
 *Return: always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	long int sum = 2;

	while (b <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}

	printf("%ld\n", sum);

	return (0);
}
