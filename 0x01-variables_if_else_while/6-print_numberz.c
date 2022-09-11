#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function main() prints all numbers
 *
 * Return: Always 0 
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');
	return (0);
}