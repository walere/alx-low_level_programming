#include "main.h"
/**
 * swap_int- swaps the value of two intergers
 * @a: first integer
 * @b: secont integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int sub;

	sub = *b;
	*b = *a;
	*a = sub;
}
