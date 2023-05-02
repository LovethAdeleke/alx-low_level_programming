#include "main.h"
/**
 * more_numbers - print number 0 to 14 10 times
 */
void more_numbers(void)
{
	int counter;
	int Num;

	for (counter = 0; counter <= 9; counter++)
	{
		for (Num = 0; Num <= 14; Num++)
		{
			if (Num >= 10)
				_putchar((Num / 10) + 48);
			_putchar((Num % 10) + 48);
		}
		_putchar('\n');
}
