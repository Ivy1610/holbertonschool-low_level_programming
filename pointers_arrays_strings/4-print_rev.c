#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: lenght
 */
void print_rev(char *s)
{
	int longa = 0;
	int o;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	s--;
	for (o = longa; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
