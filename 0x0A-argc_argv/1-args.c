#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: number of arguments passed to the program
 *@argv: array of arguments passed to the program
 *
 *Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
