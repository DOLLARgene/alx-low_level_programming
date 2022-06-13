#include "main.h"

/**
*_isdigit - checks whether a  character is a digit or not
*@c: tested character
*Return: 1 if it is, 0 otherwise
*/

int _isdigit(int c)
{
	int isdigit = 0;

	if ((c >= 48) && (c <= 57))
	{
		isdigit = 1;
	}

	return (isdigit);
}
