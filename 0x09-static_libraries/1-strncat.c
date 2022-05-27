
  
#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;

	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (dest);
}