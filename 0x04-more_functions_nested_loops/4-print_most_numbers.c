#include "main.h"
/**
 * print_most_numbers - print number 0 to 9
 *  except 2 and 4
 */
void print_most_numbers(void)
{
	int N;

	for (N = 48; N <= 57; N++)
	{
		if (N != 50 && N != 52)
			_putchar(N);
	}
	_putchar('\n');
}
