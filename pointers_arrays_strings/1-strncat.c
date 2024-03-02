#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatene deux chaine suivie d'un n octet
 * @dest: chaine 1
 * @src: chaine 2
 * @n: nombre maximum de charactere
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *text = dest;

	while (*text != '\0')
	{
		text++;
	}
	while (*src != '\0' && n > 0)
	{
		*text = *src;
		text++;
		src++;
		n--;
	}
	*text = '\0';

	return (text);
}
