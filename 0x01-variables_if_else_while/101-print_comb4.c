#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 7;
	int a1 = 1;
	int b1 = 8;
	int a2 = 2;
	int b2 = 9;

	while (a <= b)
	{
		a2 = a + 1;
		while (a1 <= b1)
		{
			a2 = a1 + 1;
			while (a2 <= b2)
			{
				putchar(a + '0');
				putchar(a1 + '0');
				putchar(a2 + '0');

				if (a != b)
				{
					putchar(',');
					putchar(' ');
				}
				a2++;
			}
			a1++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
