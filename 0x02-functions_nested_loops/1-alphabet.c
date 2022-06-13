#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char caract = 'a';

	while (caract <= 'z')
	{
		_putchar(caract);
		caract++;
	}
	_putchar('\n');
}
