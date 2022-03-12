#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers
 * followed by a new line
 * Return: return 0 if code runs correctly.
 */

int main(void)
{
	int numb;

	for (numb = 0 ; numb < 10 ; numb++)
	{
		printf("%d", numb);
	}
	printf("\n");
	return (0);
}
