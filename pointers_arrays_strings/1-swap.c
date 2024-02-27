#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swaps
 * @b: integer to swaps
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
