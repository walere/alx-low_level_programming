#include <stdio.h>
/**
 * main - program that prints the numbers from 1 - 100
 * but multiples of 3 print fizz
 * multiples of 5 buzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num ++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
	       	else if ((num % 3 == 0) && (num % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((num % 3 != 0) && (num % 5 ==0))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d " , num);
		}
	}
	printf("\n");
	return (0);
}
		
