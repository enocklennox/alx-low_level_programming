#include <stdarg.h>
#include <stdio.h>
 #include <variadic_functions.h>

/**
*print_strings - prints strings, followed by new line
*@separator: string to be printed between the strings
*@n: number of strings passed to the functions
*
*Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, char *)

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
	printf("\n");

	va_end(args);
