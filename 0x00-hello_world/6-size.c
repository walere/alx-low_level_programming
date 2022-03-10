#include <stdio.h>
#include <stdint.h>
/**
 * main - program that prints the size of various data types
 * Use the printf function
 * Return: Return 0 if program runs correctly.
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(li));
	printf("size of a long long: %zu byte(s)\n", sizeof(lli));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
