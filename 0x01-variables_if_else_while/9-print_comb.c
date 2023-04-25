#include <stdio.h>
/**
 * main - prints all possible comb.
 * of single-digit Nos
 * Numbers must be separated by ,
 * followed by a space
 * Numbers should be printed in ascending order
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
