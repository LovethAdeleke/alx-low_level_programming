#include "main.h"
/**
 * _isalpha - check for alphabetic character.
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (cc >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}