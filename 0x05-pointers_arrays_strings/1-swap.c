#include "main.h"
/**
 * swap_int - swap the values of two integers a and b
 * @a: a pointer to an int that will be updated
 * @b: a pointer to an int that will be updated
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
