#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function main() prints all the alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	
	return (0);
}
