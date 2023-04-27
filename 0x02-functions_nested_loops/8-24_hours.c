#include main.h
/**
 * jack_bauer - print every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
		}
	}
}
