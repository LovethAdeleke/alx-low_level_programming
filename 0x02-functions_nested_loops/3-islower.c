#include "main.h"
/**
 * _islower - check for lowercase character.
 * @c: is an alphabet
 * Return: 1 if c is lowercase, else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
