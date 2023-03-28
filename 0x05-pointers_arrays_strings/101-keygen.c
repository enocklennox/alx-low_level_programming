#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *main - generates random valid passwords for 101-crackme
 *
 *Return: Always 0
 */
int main(void)
{
	int i, sum = 0, diff_half1, diff_half2;
	char password[100];

	srand(time(NULL));

	while (sum < 2772)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i++];
	}

	diff_half1 = (sum - 2772) / 2;
	diff_half2 = (sum - 2772) / 2 + (sum - 2772) % 2;

	i = 0;

	while (password[i])
	{
		if (i % 2 == 0)
			password[i] += diff_half1;
		else
			password[i] -= diff_half2;

		putchar(password[i++]);
	}

	return (0);
}
