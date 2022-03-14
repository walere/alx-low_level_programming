#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints all the single digit number of base 10
 * using putchar function
 * Return: return 0 if program runs successfully
 */

int main(void)
{
	char x = 48;

	while (x <= 57)
	{
		putchar(x);
		x += 1;
	}
	putchar('\n');
	return (0);
}
