#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: A negative integer if s1 is "smaller" than s2,
 * a positive integer if s1 is "greater" than s2,
 *  and 0 if the two strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
