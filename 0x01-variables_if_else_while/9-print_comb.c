#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar('0' + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	return (0);
}
