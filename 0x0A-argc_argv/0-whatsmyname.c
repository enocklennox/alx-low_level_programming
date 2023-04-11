#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the name of the program
 *@argc: number of arguments passed to the program
 *@argv: array of arguments passed to the program
 *
 *Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
