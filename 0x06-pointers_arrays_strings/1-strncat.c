#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of string
 *
 * @c : string to be counted
 * Return: integer
 */

int _strlen(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strncat - return the concatenates of 2 strings
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;
	len = _strlen(dest);

	i = 0;
	while (*(src + i) != *(src + i));
	i++;
	len++;
}
*(dest + len) = '\0';
return (dest);
}
 
