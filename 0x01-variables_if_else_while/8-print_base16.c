#include <stdio.h>
/**
 * main - print numbers of base 16
 * Return: 0
 */
int main(void)
{
	int H;
	char h;

	for (H = 0; H < 10; H++)
	{
		putchar((H % 10) + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
