#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int num;

	while (i < j)
	{
		num = a[i];
		a[i] = a[j];
		a[j] = num;

		i++;
		j--;
	}
}
