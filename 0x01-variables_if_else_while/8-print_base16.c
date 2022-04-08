#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - assigns a random number to int n everytime
 *   * it executes, and prints it
 *    * Return: Always 0 (Success)
 *      */
int main(void)
{
		int n, tmp, a;

			for (n = 48; n < 64; n++)
					{
								if (n >= 58)
											{
															tmp = n - 58;
																		a = 97 + tmp;
																					putchar(a);
																							}
										else
													{
																	putchar(n);															 }
											}
				putchar('\n');
					return (0);
}
