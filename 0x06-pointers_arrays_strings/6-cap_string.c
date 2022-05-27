#include "main.h"

/**
 * cap_string - write a functinon that capitalizes all words of a string
 *
 * @entry: input string
 *
 * Return: My return
 */
char *cap_string(char *entry)
{
    int t, i, c;

    char chars[] = {' ', ',', ';', '.', '!',
                    '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};
    t = 32;

    for (i = 0; entry[i] != '\0'; i++)
    {
        if (entry[i] >= 'a' && entry[i] <= 'z')
        {
            entry[i] = entry[i] - t;
        }
        t = 0;
        for (c = 0; chars[c] != '\0'; c++)
        {
            if (chars[c] == entry[i])
            {
                t = 32;
                break;
            }
        }
    }
    return (entry);
}