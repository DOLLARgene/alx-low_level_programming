#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: Second string
 * @src: first string
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
;
for (y = 1; y <= n; y++)
{
dest[x] = src[y - 1];
x++;
}
dest[x] = '\0';
return (dest);
}
