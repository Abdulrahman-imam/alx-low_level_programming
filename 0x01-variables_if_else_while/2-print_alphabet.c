#include <stdlib.h>
#include <stdio.h>

/**
 * main - the function main () prints all alphabet in lowercase
 *
 * Return: Always 0 
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}