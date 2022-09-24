#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, k;

i = 0;
while (dest[i] != '\0')
{
i++;
}

k = 0;
while (k < n && src[k] != '\0')
{
dest[i] = src[k];
k++;
i++;
}

dest[i] = '\0';

return (dest);
}
