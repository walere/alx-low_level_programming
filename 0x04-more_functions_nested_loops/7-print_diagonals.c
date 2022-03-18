#include <stdio.h>
#include <stdlib.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times charater should be printed
 * Return: void
 */
int main(void)
{
	int n;
	int j;
	char s = ' ';
	char c = '\\';

	for (n = 8; n > 0; n--)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%c%c", s, c);
			printf("\n");
		}
	
	}	
	
	
	return (0);

}
