#include "main.h"
/**
 * print_sign - this function prints if an integer
 * is positive , negative or zero
 * @n: is the integer tested
 * Return: 1 when positive
 * 0 where number is zero
 * -1 when n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
