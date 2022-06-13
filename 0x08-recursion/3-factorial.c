#include "main.h"
/**
 *factorial - length of a string
 *@n: pointer block of memory to fill
 *Return: factorial
 */


int factorial(int n)
{
if (n == 0)

return (1);

else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));

}
