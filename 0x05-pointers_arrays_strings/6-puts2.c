#include "main.h"
/**
 * puts2 - function that prints every other character
 * @str: argument
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	_putchar(*str);
	
	while (*(str + i) < '\0')
	{
		i = i + 2;
		_putchar(*(str + i));
	}
	_putchar('\n');
}


