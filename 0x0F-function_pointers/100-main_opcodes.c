#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < n; i++)
		printf("%02hhx%c", *((char *)main + i), i == n - 1 ? '\n' : ' ');
	return (0);
}
