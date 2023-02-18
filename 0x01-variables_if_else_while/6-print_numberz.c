#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */

int main(void)
{
	int c = 'o';

	while (c < 10)
	{
		putchar(48 + c)(c);
		c++;
	}
	putchar('\n');
	return (0);

}
