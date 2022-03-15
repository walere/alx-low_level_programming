#include "main.h"
/**
 * main- prints 10x the alphabet
 *
 * Return: return true (0) when sucessful
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
