#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - displays a string recursively
 * @s: Pointer to the chararcter string to display
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
