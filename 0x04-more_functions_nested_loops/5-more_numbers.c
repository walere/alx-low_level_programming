#include "main.h"
/**
 * more_numbers - print numbers from 0-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; i++)
		{
			if (j > 9)
			_putchar((j / 10) + '0')';
			_putchar((j % 10) '0');
		}
		_putchar('\n');
	}
}
