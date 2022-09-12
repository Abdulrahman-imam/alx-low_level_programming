#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function main() Prints all the combinations of 2 different digits in ascending order, separated by a comma.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n = 0;
	int k = 49;

	for (i = 48; i <= 56; ++i)
	{
		for (; k <= 57; ++k)
		{

			putchar(i);
			putchar(k);
			if (i != 56 || k != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		n++;
		k = 49 + n;
	}
	
	putchar('\n');

	return (0);
}
