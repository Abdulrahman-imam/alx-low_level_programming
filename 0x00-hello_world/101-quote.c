#include <unistd.h>
#include <stdlib.h>
/**
 * main - main() entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int start = 1;
	int end = 58;

	write(start, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", end);

	return (1);
}