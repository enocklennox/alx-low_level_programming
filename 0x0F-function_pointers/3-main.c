#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = num1 / num2;
		break;
		case '%':
	if (num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	result = num1 % num2;
		break;
		default:
	printf("Error\n");
	exit(99);
	}

	printf("%d\n", result);

	return (0);
}
