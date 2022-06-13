#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: pointer to the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int lenght = 0, i;

	while (s[lenght] != '\0')
		lenght++;
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
