#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 8;
	int a1 = 1;
	int b1 = 9;
	int tmp = 1;

	while (a <= b)
	{
		a1 = tmp;

		while (a1 <= b1)
		{
			putchar(a + '0');
			putchar(a1 + '0');
			a1++;

			if (a != b)
			{
				putchar(',');
				putchar(' ');
			}
		}
		tmp++;
		a++;
	}
	putchar('\n');
	return (0);
}
