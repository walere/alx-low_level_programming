#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program thaat prints the alphabets in lowercase
 * use the putchar function
 * Return: return 0 if code runs successfully.
 */

int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
