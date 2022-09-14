#include "main.h"
/**
 * print_times_table - perform the multiplication of the first 9 digits
 * @n: Number indicate columns and rows
 * Description: entry
 * Return: Void
 */

void print_times_table(int n)
{
	int i;
	int x;

	if (n > 0 && n <= 15)
	{
		for (i = 0 ; i <= n; ++i)
		{
			for (x = 0 ; x <= n; ++x)
			{
				print_no_zero(i * x, x, n);
			}
			_putchar('\n');
		}
	}
}
