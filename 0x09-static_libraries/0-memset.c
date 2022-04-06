#include "main.h"
/**
 * _memset - fills memorywith a constant byte
 * @s: memory area
 * @b: byte
 * @n: byter
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
