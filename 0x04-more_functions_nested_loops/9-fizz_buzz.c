#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100, replacing multiples of three with "Fizz",
 *multiples of five with "Buzz", and multiples of both three and five with "FizzBuzz"
 *
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");

	return (0);
}
