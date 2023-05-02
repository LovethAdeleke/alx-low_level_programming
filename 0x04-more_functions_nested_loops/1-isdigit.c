#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: the input character
 * Return: 1 if c is a digit, if not, 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
