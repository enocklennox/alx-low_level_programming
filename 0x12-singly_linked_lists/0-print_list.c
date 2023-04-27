#include "list.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			_putchar('['), _putchar('0'), _putchar(']'), _putchar(' '),
				_putchar('('), _putchar('n'), _putchar('i'),
				_putchar('l'), _putchar(')'), _putchar('\n');
		else
			_putchar('['), print_number(current->len), _putchar(']'), _putchar(' '),
				print_string(current->str), _putchar('\n');

		current = current->next;
		count++;
	}

	return (count);
}

/**
 * print_number - prints an integer using only putchar
 * @n: integer to print
 */
void print_number(int n)
{
	if (n / 10)
	print_number(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * print_string - prints a string using only putchar
 * @str: string to print
 */
void print_string(char *str)
{
	if (*str == '\0')
	return;

	_putchar(*str);
	print_string(str + 1);
}
