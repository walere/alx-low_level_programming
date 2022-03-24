#include "main.h"
/**
 * reverse_array - function
 * @a: array of integer
 * @n: number of integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, last, i;

	last = n - 1;
	i = 0;

	while (i < last)
	{
		temp = *(a + i);
		*(a + i) = *(a + last);
		*(a + last) = temp;
		i++;
		last--;
	}
}
