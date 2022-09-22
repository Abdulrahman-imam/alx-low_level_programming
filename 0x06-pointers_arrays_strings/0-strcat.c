#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to destiny
 * @src: string to source
 * Return: Return a concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (*(dest + length) != '\0')
		length++;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + length) = *(src + i);
		length++;
	}
	*(dest + length) = *(src + i);

	return (dest);
}
