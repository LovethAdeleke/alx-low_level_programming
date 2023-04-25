#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: o
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
