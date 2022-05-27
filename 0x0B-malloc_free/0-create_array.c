#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size
 * @c: is the char
 *
 * Return: Null or Success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(char) * (size));

	if (m == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		m[i] = c;
		i++;
	}
	return (m);
}