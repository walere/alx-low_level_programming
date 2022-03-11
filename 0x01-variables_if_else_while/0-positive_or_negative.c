#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assings a random number to int
 * prints if int is positive or negative
 * Return: 0 if code is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return(0);
}
