#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function main() Prints all the other alphabets in lowercase except for  only e, q.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
