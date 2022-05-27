#include "main.h"

/**
 * _strcmp - write a functino that compares
 *
 * @s1: Second string
 * @s2: first string
 *
 * Return: If the strings are equal return "0", if not return other number
 */

int _strcmp(char *s1, char *s2)
{
for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
;
if (*s1 == *s2)
{
return (0);
}
return (*s1 - *s2);
}
