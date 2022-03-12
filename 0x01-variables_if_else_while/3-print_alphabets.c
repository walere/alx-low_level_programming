#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints the alphabet in lower and uper case
 * using putchar function
 * Return: return 0 if program runs successfully
 */

int main(void)
{
	char lowCase;
	char uppCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		putchar(lowCase);
	}
	for (uppCase = 'A'; uppCase <= 'Z'; uppCase++)
	{
		putchar(uppCase);
	}
	putchar('\n');
	return (0);
}
