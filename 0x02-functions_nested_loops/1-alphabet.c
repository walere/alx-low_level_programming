#include "main.h"
/**
 * main- prints lowercase alphabets
 *
 * Return: return 0 when sucessful
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
