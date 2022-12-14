#include <stdlib.h>
#include <stdio.h>

/**
 * main - main() prints all the combinations of 2-digit from 0-99 separated by a comma then followed by a space.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1;
    int n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
