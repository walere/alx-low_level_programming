#include "main.h"
/**
 * puts2 - function that prints every other character
 * @str: argument
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
}

