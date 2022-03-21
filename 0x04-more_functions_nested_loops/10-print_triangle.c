#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int row, col, aux;

	if (size > 0)
	{
		for (row = 0; col < size ; col++)
		{
			aux = (size - row) - 1;
			if (col < aux)
			{
				_putchar(' ');
			} else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
	else 
	{
		_putchar('\n');
	}
}