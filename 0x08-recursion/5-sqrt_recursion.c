#include <main.h>
/**
 *_sqrt_recursion -> sqrt using recursion
 *@n: parameter to be sqrt
 *Return: square root of a number
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) >num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}	
}

/**
 * _sqrt_recursion -returns the natural square root of a number.
 * @n: number to find sqrt of
 *
 * Return: squareroot of n.
 * -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
