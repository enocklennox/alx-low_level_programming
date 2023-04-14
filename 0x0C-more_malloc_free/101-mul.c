#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_isdigit - Checks if a character is a digit
 *@c: Character to check
 *
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 *_strlen - Computes the length of a string
 *@s: String to compute length of
 *
 *Return: Length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
/**
 *mul - Multiplies two positive numbers
 *@num1: First number to multiply
 *@num2: Second number to multiply
 *
 *Return: Pointer to the result string
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry;
	char *result;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]))
			return (NULL);

		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			if (!_isdigit(num2[j]))
				return (NULL);

			carry += (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0');
			result[i + j + 1] = carry % 10 + '0';
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}
/**
 *main - Entry point
 *@argc: Number of arguments
 *@argv: Array of arguments
 *
 *Return: Always 0
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = mul(argv[1], argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", result);

	free(result);

	return (0);
}
