#include "main.h"

/**
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
    int isupper;

    isupper = 0;
	if ((c >= 'A') && (c <= 'Z'))
	{
		isupper = 1;
	}

	return (isupper);
}
