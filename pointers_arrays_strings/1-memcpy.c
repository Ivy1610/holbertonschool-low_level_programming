#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: pointer to dest
 * @src: pionter to src
 * @n: number of bytes to copy
 * Retrun: A pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

