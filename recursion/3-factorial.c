#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculat the factorial
 *
 * Return: Factorial of n, or -1 if n negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
