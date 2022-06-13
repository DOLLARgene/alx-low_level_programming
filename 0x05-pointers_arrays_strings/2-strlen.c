#include "main.h"
/**
 * _strlen - returns the length of a string
 * @word: a pointer to int that will be updated
 * Return: 0
 */
int _strlen(char *word)
{
int d;

d = 0;

while (word[d] != '\0')
{
d++;
}
return (d);
}
