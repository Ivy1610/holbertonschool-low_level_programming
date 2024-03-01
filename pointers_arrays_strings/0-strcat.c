#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatene deux chaine
 * @dest: chaine 1
 * @src: chaine 2
 * Return: Null
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
