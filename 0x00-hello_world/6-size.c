#include <stdio.h>
/**
 * a program that prints the size of various data types to the standard output
 * return 0
 */
int main ()
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long: %zu byte(s)\n", sizeof(long));
	printf("size of a long long: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);

}
