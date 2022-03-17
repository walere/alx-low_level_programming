#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assings a random number to int
 * prints if int is positive or negative
 * Return: 0 if code is successful
 */
int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
