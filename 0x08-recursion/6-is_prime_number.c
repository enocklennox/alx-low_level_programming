/**
 *is_prime - checks if a number is prime
 *@n: the number to check
 *
 *Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 *main - entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int n;

	n = get_number();
	if (is_prime(n))
		print_is_prime(n);
	else
		print_not_prime(n);

	return (0);
}

/**
 *get_number - prompts user for an integer
 *
 *Return: integer entered by user
 */
int get_number(void)
{
	char buffer[1024];
	int n;

	printf("Enter an integer: ");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &n);

	return (n);
}

/**
 *print_is_prime - prints that a number is prime
 *@n: the number to print
 */
void print_is_prime(int n)
{
	printf("%d is a prime number.\n", n);
}

/**
 *print_not_prime - prints that a number is not prime
 *@n: the number to print
 */
void print_not_prime(int n)
{
	printf("%d is not a prime number.\n", n);
}
