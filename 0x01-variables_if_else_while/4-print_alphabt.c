#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints the alphabet in lowercase except q and e
 * using putchar function
 * Return: return 0 if program runs successfully
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
