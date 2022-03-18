#include "main.h"
/**
 * print_diagonal- draws a straight line in the terminal
 * @n: number of times charater should be printed
 * Return:void
 */
void print_diagonal(int n)
{
	int n;
	int i;
	int j;
	char s = ' ';
	char c = '\\';

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(s);
		}
			_putchar(c);
			_putchar('\n');
		}
}
