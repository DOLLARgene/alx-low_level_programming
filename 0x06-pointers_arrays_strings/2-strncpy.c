#include "main.h"
/**
 * _strncpy - write a functino that two strings. it will us
 * @dest: Second string
 * @src: first string
 * @n: this is the number bytes fro src
 *
 * Return: My return
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}