#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints all the single digit number of base 10
 * using putchar function
 * Return: return 0 if program runs successfully
 */

int main(void)
{
	int x;
	char ch;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
