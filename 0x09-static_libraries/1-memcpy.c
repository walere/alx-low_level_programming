#include "main.h"
/**
 * _memcpy - fills memorywith a constant byte
 * @dest:destination memory area
 * @src: byte
 * @n: byter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + i);

	return (dest);
}
