#include <stdio.h>
/**
 * a program that prints the size of various data types
 * return 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(li));
	printf("size of a long long: %d byte(s)\n", sizeof(lli));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);

}
