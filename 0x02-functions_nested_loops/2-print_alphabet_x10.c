#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char caract = 'a';

	while (count < 10)
	{
		caract = 'a';
		while (caract <= 'z')
		{
			_putchar(caract);
			caract++;
		}
		_putchar('\n');

		count++;
	}
}
