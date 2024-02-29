#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copier la chaine pointer
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *text = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (text);
}
