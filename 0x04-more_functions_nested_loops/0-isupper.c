#include "main.h"
/**
 * _isupper - function to check uppercase character
 * @c: the variable
 * Return: 1 if c is uppercase, if not, 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
