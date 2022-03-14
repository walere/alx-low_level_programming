#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints all possible combination of single-digit
 * using putchar function
 * Return: return 0 if program runs successfully
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n > 56)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
