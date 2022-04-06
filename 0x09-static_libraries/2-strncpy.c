#include "main.h"

/**
 * _strncpy - function that copies a number 
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
