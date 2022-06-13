#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to strings of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, len, count = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}
	return (sum);
}
