#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n, x, c;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			c = n * x;

			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + '0');

			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
