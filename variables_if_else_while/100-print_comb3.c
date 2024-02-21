#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		if (((num % 10) != (num / 10)) && (num / 10 < num % 10))
		{
			putchar(num / 10 + '0');
			putchar(num % 10 + '0');
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
