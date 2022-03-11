#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this program prints a random number n
 * and tells us if the last digit of n is > or < 5
 * Return: returns 0 if code run correctly.
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 0 && lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 ", n, lastDigit);
	}
	return (0);
}

