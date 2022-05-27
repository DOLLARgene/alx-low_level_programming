#include "main.h"

/**
 * string_toupper - write a functino that compares
 *
 * @hi: input string
 *
 * Return: My return
 */
char *string_toupper(char *hi)
{
    int i = 0;
    int d = 'a' - 'A';

    for (i = 0; hi[i] != '\0'; ++i)
    {
        if (hi[i] >= 'a' && hi[i] <= 'z')
        {
            hi[i] = hi[i] - d;
        }
    }
    return (hi);
}