#include <unistd.h>
/**
 * _putchar - write the char c to standard output
 * @: The character to print
 * Return: on success 1.
 * On error: -1 is returned , and error is there returned
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
