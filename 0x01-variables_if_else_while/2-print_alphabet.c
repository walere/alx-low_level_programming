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
	alphabet = 'a';

	while (alphabet <= 'z');
	{
		putchar(alphabet);
		alphabet++ ;
	}
	return (0);
}
