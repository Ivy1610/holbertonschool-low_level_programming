#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: Natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	{
		int i = 1;
		int j = n / 2;
		int mid;
		long square;
		
		while (i <= j)
		{
			mid = (i + j) / 2;
			square = (long)mid * mid;
			if (square == n)
			{
				return (mid);
			}
			else if (square < n)
			{
				i = mid + 1;
			}
			else
			{
				j = mid - 1;
			}
		}
	}
	return (-1);
}
