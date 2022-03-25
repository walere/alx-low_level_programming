#include "main.h"

/**
 * _strncat - return the concatenates of 2 strings
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
 
