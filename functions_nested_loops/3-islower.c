#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase characters.
 *
 * @c: number
 *
 * Return: int.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
	return (0);
}
