#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int c;

	for (c <= 9; c++)
	{
		if (c != 2)
		{
		if (c != 4)
		{
		_putchar(c);
		}
		}
	}
	_putchar('\n');
}
