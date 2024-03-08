#include <stdio.h>
#include "main.h"
/**
 * main - print name
 *@argc: int.
 *@argv: char.
 * Return: integer
 */
int main(int argc, char *argv[])
{
       if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
