#include "main.h"
/**
 * print_last_digit - print the last digit of a number.
 * @a: the number
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int ld = a % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	_putchar('\n');
	return (ld);
}
